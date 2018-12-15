# Caesar Cipher Encryption

## Language
C

## Project Details
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
the	expression	((ch	– ‘A’)+n)%26	+	‘A’	to	calculate	the	encrypted	version	of	an	upper-case	
letter,	where	ch	stores	the	letter	and	n	stores	the	shift	amount.	(You’ll	need	a	similar	
expression	for	lower-case	letters.)  
  
  
  (b)	Modifying	above	program	so	that	the	program	prompts	the	user	to	enter	the	name	of	a	
file	containing	the	message	to	be	encrypted:  
>*Enter	name	of	file	to	be	encrypted:	message.txt.  
>Enter	shift	amount	(1-25):3*  
   
   The	program	then	write	the	encrypted	message	to	a	file	with	the	same	name	but	an	added	
extension	of	.enc.	In	this	example,	the	original	file	name	is	message.txt,	so	the	encrypted	
message	will	be	stored	in	a	file	named	message.txt.enc.	There’s	no	limit	on	the	size	of	the	file	
to	be	encrypted	or	on	the	length	of	each	lien	in	the	file.

## License
[MIT](https://choosealicense.com/licenses/mit/)
    

