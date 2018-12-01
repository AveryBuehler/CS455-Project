#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <unistd.h> /* UNIX */
#include <direct.h> /* WINDOWS */
#include <limits.h>
#include "encrypt_text.h"

#define MAX_FILE_SIZE 512

void read_from_file(void);

void read_from_file(void) {
    char file_name[MAX_FILE_SIZE], cwd[_MAX_PATH], *text;
    FILE *file;
    long file_size;
    size_t result;

    /* Getting the name of the file to be encrypted */
    printf("Enter the name of the file to be encrypted: ");
    fgets(file_name, MAX_FILE_SIZE, stdin);

    file_name[strcspn(file_name, "\n")] = 0;

    /* Checking if there are any errors in opening */
    if((file = fopen(file_name, "rb")) == NULL) {
        printf("Cannot open file.\n");
        exit(EXIT_FAILURE);
    }

    /* Getting the file size */
    fseek(file, 0, SEEK_END);
    file_size = ftell(file);
    rewind(file);

    /* Allocating memory based on the file size */
    text = (char *) malloc(sizeof(char) * file_size);
    if(text == NULL) {
        printf("Insufficient memory.\n");
        exit(EXIT_FAILURE);
    }

    /* Copying the file into the text buffer */
    result = fread(text, 1, file_size, file);
    if(result != file_size) {
        printf("Error reading file.\n");
        exit(EXIT_FAILURE);
    }

    /* Creating a new file with the ".enc" extension */
    char *cipher_text = encrypt_text(text);
    char *new_file = strcat(file_name, ".enc");

    /* Creating the file in write mode */
    file = fopen(new_file, "wb");

    /* Writing to the new file */
    fwrite(cipher_text, sizeof(char), strlen(cipher_text), file);

    /* Closing the file stream */
    fclose(file);
    
    /* Getting the Current Working Directory (CWD) */
    if(_getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Saved encrypted text to: %s/%s\n", cwd, new_file);
    } else {
        perror("_getcwd() error");
        exit(EXIT_FAILURE);
    }

    /* Deallocating allocated memory */
    free(text);
}