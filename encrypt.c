/* 
 * Caesar Cipher Encryption Project
 * --------------------------------
 * Author:  Avery Buehler
 * Class:   CS455 - System Programming
 * Date:    14 December 2018
 * 
*/

/*
 * encrypt.c file
 * -------------------
 * This file is used for keyboard I/O.
 * 
 * Dependencies
 * -------------------
 * encrypt_text.h - encryption function header
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encrypt_text.h"

void read_from_keyboard(void);

/* Maximum message size (+1 for ending character) */
#define MAX_CHAR 81

void read_from_keyboard(void) {
    char *message = malloc(sizeof(char) * MAX_CHAR);

    /* Checking if user has enough memory for allocation */
    if(message == NULL) {
        printf("Insufficient memory.\n");
        exit(EXIT_FAILURE);
    }

    /* Asking for a message */
    printf("Enter a message: ");

    /* Gets the message up to 80 characters */
    fgets(message, MAX_CHAR, stdin);

    /* Removing trailing newline if it's there */
    if((strlen(message) > 0) && (message[strlen(message) -1] == '\n')) {
        message[strlen(message) - 1] = '\0';
    }

    char *cipher_text = encrypt_text(message);

    printf("Encrypted message: %s\n\n", cipher_text);

    /* Deallocating allocated memory space */
    free(message);
}