/* 
 * Caesar Cipher Encryption Project
 * --------------------------------
 * Author:  Avery Buehler
 * Class:   CS455 - System Programming
 * Date:    14 December 2018
 * 
*/

/*
 * encrypt_text.c file
 * -------------------
 * This file is used for encrypting text.
 */ 

#include <stdio.h>

char *encrypt_text(char *str);

char *encrypt_text(char *str) {
    /* Asking for the shift amount */
    char *shift_char = malloc(sizeof(shift_char));
    int shift_num = 0;

    /* Requiring a correct shift amount */
    do {
        printf("Enter shift amount (1-25): ");
        fgets(shift_char, sizeof(shift_num), stdin);
        shift_num = atoi(shift_char);

        /* Checking if shift is invalid */
        if(shift_num < 1 || shift_num > 25) {
            printf("Please enter a valid shift amount.\n");
        }
    }while(shift_num <1 || shift_num > 25);

    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            if(str[i] >= 97) {
                str[i] = ((str[i] - 97) + shift_num)%26 + 97;
            } else {
                str[i] = ((str[i] - 65) + shift_num)%26 + 65;
            }
        }
    }
    return str;
}