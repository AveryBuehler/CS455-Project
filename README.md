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
  - [Examples](#examples)
- [Features](#features)
- [C Code Samples](#c-code)
- [Future Improvements](#future-improvements)

## Overview
  ### Background
  <sub><a href="https://en.wikipedia.org/wiki/Caesar_cipher" target="_blank">Information obtained from Wikipedia</a></sub>
  >"The Caesar cipher is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of `3`, `D` would be replaced by `A`, `E` would become `B`, and so on. The method is named after Julius Caesar, who used it in his private correspondence."
  
  ### Project Description
  <sub>Information from CS455 - System Programming</sub>
  1. Write a program that encrypts a message using a Caesar cipher. The user will enter the plaintext (message to be encrypted) and the shift amount:
  
      ```
      Enter message to be encrypted: Go ahead, make my day.
      Enter shift amount (1-25): 3
      Encrypted message: Jr dkhdg, pbnh gdb.
      ```
      
   _Notice that the program can decrypt a message if the user enters 26 minus the original shift amount:_
      ```
      Enter message to be encrypted: Jr dkhdg, pbnh gdb.
      Enter shift amount (1-25): 23
      Encrypted message: Go ahead, make my day.
      ```
   You may assume that the message does not exceed 80 characters. Characters other than letters should be left unchanged. Lowercase    letters should remain lowercase when encrypted; uppercase letters should remain uppercase as well.
  
  2. Modify the above program so that the program prompts the user to enter the name of a file containing the message to be encrypted:
  
      ```
      Enter name of file to be encrypted: message.txt
      Enter shift amount (1-25): 3
      ```
      
   The program should then write the encrypted message to a file with the same name but an added extension of `.enc`. In the example above, the original file name is `message.txt`, so the encrypted message will be stored in a file named `message.txt.enc`. There is no limit on the size of the file to be encrypted or the length of the lines in the file. 

### Features
- The web application is made entirely of **vanilla HTML**, **CSS**, and **JavaScript**
- The application features a  **local leaderboard** utilizing the browser's local storage
- Its only dependencies are **[Google Fonts](https://fonts.google.com/)** and **[Font Awesome 5.6.3](https://fontawesome.com/)**

<sub>The console contains a bunch of information for debugging purposes, so you can cheat if you don't want to use too much brain power! </sub>

## Future Improvements
- [ ] Allow the player to enter in their own set of words before playing
- [ ] Make the web page responsive to various viewports (e.g., mobile, 4k monitors, etc.)

## License
[MIT](https://tldrlegal.com/license/mit-license)


# Caesar Cipher Encryption in C

## :rocket: Installation
Clone this repository.

>```git clone https://github.com/AveryBuehler/CS455-Project.git```

Run the file.

>```cipher.exe```

## :running: Example
### :computer: Keyboard Example
##### Text Input
  >Go	ahead,	make	my	day.   
  
##### Text Output
>Jr	dkhdg,	pdnh	pb	gdb.

### :file_folder: File Example
##### Example Input File
<img src="https://i.imgur.com/HHE57Jm.jpg" height="120">

##### Example Output File
<img src="https://i.imgur.com/9aF6M97.jpg" height="120">

## :mag: Project Details
One	of	the oldest known encryption techniques is	the Caesar cipher, attributed	to Julius	
Caesar.	 It	involves replacing	 each	 letter	 in	 a	 message	 with	 another letter	that is	a	fixed	
number	of positions	later	in	the	alphabet.	(If	the	replacement	would	go	past	the	letter X, the	
cipher	“wrap	around”	to	the	begging	of	the	alphabet.	For	example,	if	each	letter	is replaced	
by	the	letter two	positions	after	it,	then Y	would	be replaced by A	, and	Z	would	be replaced	
by	B.)	    
    
  (a)	Write	a	program	that	encrypts	a	message	using	a	Caesar	cipher.	The	user	will	enter	the	
message	 to	be	encrypted	and	 the	 shift	amount	 (the	number	 of	positions	by	which	letters	
should	be	shifted):  
  >*Enter	message	to	be	encrypted:	Go	ahead,	make	my	day.  
>Enter	shift	amount	(1-25):3  
>Encrypted	message:	Jr	dkhdg,	pdnh	pb	gdb.*  
  
  Notice that the program can decrypt a	message	if the user	enters 26 minus	the	original key:  
  >*Enter	message	to	be	encrypted:	Jr	dkhdg,	pdnh	pb	gdb.  
>Enter	shift	amount	(1-25):23  
>Encrypted	message:	Go	ahead,make	my	day*   
  
  You	may	assume	that	the	message	does	not	exceed	80	characters.	Characters	other	than	
letters	should	be	left	unchanged.	Lower-case	letters	remain	lower-case	when	encrypted,	
and	upper-case	letters	remain	upper-case.	Hint:	To	handle	the	wrap-around	problem,	use	
the	expression	```((ch	– ‘A’)+n)%26	+	‘A’```	to	calculate	the	encrypted	version	of	an	upper-case	
letter,	where	ch	stores	the	letter	and	n	stores	the	shift	amount.	(You’ll	need	a	similar	
expression	for	lower-case	letters.)  
  
  
  (b)	Modify the above	program	so	that	the	program	prompts	the	user	to	enter	the	name	of	a	
file	containing	the	message	to	be	encrypted:  
>*Enter	name	of	file	to	be	encrypted:	message.txt.  
>Enter	shift	amount	(1-25):3*  
   
   The	program	should then	write	the	encrypted	message	to	a	file	with	the	same	name	but	an	added	
extension	of	```.enc```.	In	this	example,	the	original	file	name	is	```message.txt```,	so	the	encrypted	
message	will	be	stored	in	a	file	named	```message.txt.enc```.	There’s	no	limit	on	the	size	of	the	file	
to	be	encrypted	or	on	the	length	of	each	line	in	the	file.

## :books: License
[MIT](https://choosealicense.com/licenses/mit/)
    

