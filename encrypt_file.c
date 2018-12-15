/* 
 * Caesar Cipher Encryption Project
 * --------------------------------
 * Author:  Avery Buehler
 * Class:   CS455 - System Programming
 * Date:    14 December 2018
 * 
*/

/*
 * encrypt_file.c file
 * -------------------
 * This file is used for .txt file I/O.
 * 
 * Dependencies
 * -------------------
 * encrypt_text.c - encryption function
 */ 

/* File Notes
 * ------------------
 * Binary mode (b) is needed. Only binary mode has well-defined behavior in 
 * standard C. On POSIX systems, binary and text (default) mode behave the same, 
 * but on windows, munging of newlines takes places in a way that messes up file 
 * contents.
 * 
 * This file should work for Linux and Windows systems.
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "encrypt_text.h"

/* For Windows machines */
#if defined(_WIN32) || defined(_WIN64)
    #define PLATFORM_NAME "windows"
    #define CWD_PLATFORM (cwd = _getcwd(NULL, 0)
    #include <direct.h>
#endif

/* For Linux machines */
#if defined(__linux__)
    #define PLATFORM_NAME "linux"
    #define CWD_PATH_MAX PATH_MAX
    #define CWD_PLATFORM (cwd = getcwd(NULL, 0)
    #include <unistd.h>
#endif

#define MAX_FILE_SIZE 512

void read_from_file(void);

void read_from_file(void) {

    char file_name[MAX_FILE_SIZE];
    char *cwd;
    char *text;
    FILE *file;
    long file_size;
    size_t result;
    
    /* Getting the name of the file to be encrypted */
    printf("Enter the name of the file to be encrypted: ");
    fgets(file_name, MAX_FILE_SIZE, stdin);

    /* Used to get the correct input from fgets */
    file_name[strcspn(file_name, "\n")] = 0;

    /* Checking if there are any errors in opening the file */
    if((file = fopen(file_name, "rb")) == NULL) {
        perror("Cannot open file");
        exit(EXIT_FAILURE);
    }

    /* Getting the file size */
    fseek(file, 0L, SEEK_END);
    file_size = ftell(file);
    rewind(file);

    /* Allocating memory based on the file size */
    text = malloc(file_size + 1);
    text[file_size] = '\0';
    if(text == NULL) {
        perror("Insufficient memory");
        exit(EXIT_FAILURE);
    }

    /* Copying the file into the text buffer */
    result = fread(text, 1, file_size, file);
    if(result != file_size) {
        perror("Error reading file");
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
    if(CWD_PLATFORM) != NULL) {
        if(PLATFORM_NAME == "windows") {
            printf("Saved encrypted text to: %s\\%s\n", cwd, new_file);
        }
        else if(PLATFORM_NAME == "linux") {
            printf("Saved encrypted text to: %s/%s\n", cwd, new_file);
        }
    } else {
        perror("CWD error");
        exit(EXIT_FAILURE);
    }

    /* Deallocating allocated memory */
    free(text);
}