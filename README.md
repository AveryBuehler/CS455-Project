<div align="center">
  <h1>Caesar Cipher</h1>
</div>

<div align="center">
  <strong>An implementation of the Caesar cipher written entirely in C</strong>
</div>  

<div align="center">
  <img src="https://cdncontribute.geeksforgeeks.org/wp-content/uploads/ceaserCipher.png" alt="Caesar cipher example">
</div>
  
<div align="center">  
  <sub>Made for CS455 - System Programming</sub>
</div>

## Table of Contents
- [Background](#background)
- [Project Description](#project-descrption)
- [Features](#features)
- [C Code Samples](#c-code)
- [Future Improvements](#future-improvements)

## Background
  <sub><a href="https://en.wikipedia.org/wiki/Caesar_cipher" target="_blank">Information obtained from Wikipedia</a></sub>
  >"The Caesar cipher is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of `3`, `D` would be replaced by `A`, `E` would become `B`, and so on. The method is named after Julius Caesar, who used it in his private correspondence."
  
## Project Description
<sub>Information from CS455 - System Programming</sub>
1. Write a program that encrypts a message using a Caesar cipher. The user will enter the plaintext (message to be encrypted) and the shift amount:

    ```
    Enter message to be encrypted: Go ahead, make my day.
    Enter shift amount (1-25): 3
    Encrypted message: Jr dkhdg, pbnh gdb.
    ```
      
	Notice that the program can decrypt a message if the user enters 26 minus the original shift amount:

	  ```
	  Enter message to be encrypted: Jr dkhdg, pbnh gdb.
	  Enter shift amount (1-25): 23
	  Encrypted message: Go ahead, make my day.
	  ```
      
   **Assumptions**
   - You may assume that the message does not exceed 80 characters. Characters other than letters are left unchanged. 
   - Lowercase letters should remain lowercase when encrypted; uppercase letters should remain uppercase as well.
  
2. Modify the above program so that the program prompts the user to enter the name of a file containing the message to be encrypted:
  
    ```
    Enter name of file to be encrypted: message.txt
    Enter shift amount (1-25): 3
    ```
  
  The program should write the encrypted message to the same file path but with an added extension of `.enc`. In the example above, the original file name is `message.txt`, so the encrypted message will be stored as `message.txt.enc`.  
      
   **Assumptions**
   - There is no limit on the size of the file to be encrypted or the length of the lines in the file. 

## Features
- The web application is made entirely of **vanilla HTML**, **CSS**, and **JavaScript**
- The application features a  **local leaderboard** utilizing the browser's local storage
- Its only dependencies are **[Google Fonts](https://fonts.google.com/)** and **[Font Awesome 5.6.3](https://fontawesome.com/)**

<sub>The console contains a bunch of information for debugging purposes, so you can cheat if you don't want to use too much brain power! </sub>

## C Code Samples

#### main.c
This is the driver class.
```c
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
```

## Future Improvements
- [ ] Allow the player to enter in their own set of words before playing
- [ ] Make the web page responsive to various viewports (e.g., mobile, 4k monitors, etc.)

## License
[MIT](https://tldrlegal.com/license/mit-license)
    

