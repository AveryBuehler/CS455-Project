#include <stdio.h>
#include <stdlib.h>
#include "encrypt.c"
#include "encrypt_text.c"
#include "encrypt_file.c"

#define exit_program 48
#define option_keyboard 49
#define option_file 50

int main(void) {
    char option[1];
    while(option[0] != exit_program) {
        printf("\n---Options--------------------\n");
        printf("Read from keyboard ......... 1\n");
        printf("Read from file ............. 2\n");
        printf("Exit program ............... 0\n\n");
        printf("Enter an option: ");
        fgets(option, option_file, stdin);

        if(option[0] == option_keyboard) {
            read_from_keyboard();
        }
        else if(option[0] == option_file) {
            read_from_file();
        }
        else if(option[0] == exit_program) {
            printf("Exiting program.\n");
        } else {
            printf("Invalid option number.\n");
        }
    }
    return 0;
}