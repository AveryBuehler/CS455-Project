/* 
 * Caesar Cipher Encryption Project
 * --------------------------------
 * Author:  Avery Buehler
 * Class:   CS455 - System Programming
 * Date:    14 December 2018
 * 
*/

/*
 * main.c file
 * -------------------
 * This file is the driver class for the project.
 * 
 * Dependencies
 * -------------------
 * encrypt_file.c - .txt file I/O
 * encrypt.c - keyboard I/O
 * encrypt_text.c - encryption function
 */ 

#include <stdio.h>
#include <stdlib.h>
#include "encrypt.c"
#include "encrypt_text.c"
#include "encrypt_file.c"

#define exit_program 48
#define option_keyboard 49
#define option_file 50

/* This will run until the user exits the program by pressing 0 */
int main(void) {
    char *option = malloc(1);
    while(option[0] != exit_program) {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("     CAESAR CIPHER PROGRAM\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Read from keyboard ---------- 1\n");
        printf("Read from file -------------- 2\n");
        printf("Exit program ---------------- 0\n\n");
        printf("Enter an option: ");
        fgets(option, sizeof(option), stdin);

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
	free(option);
    return 0;
}
