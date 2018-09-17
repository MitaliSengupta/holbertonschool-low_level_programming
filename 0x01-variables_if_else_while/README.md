<p align="left">
  <img src="http://i.imgur.com/NQ6jItG.jpg" width=50% height=50% />
</p> 

## 0x01-variables_if_else_while

### Description

This projects delves further into C programming language. Here we will learn more about if else and while statements.

---

### Project Takeaways

- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the if, if ... else statements
- How to use comments
- How to declare variables of types char, int, unsigned int
- How to assign values to variables
- How to print the values of variables of type char, int, unsigned int with printf
- How to use the while loop
- How to use variables with the while loop
- How to print variables using printf
- What is the ASCII character set
- What are the purpose of the gcc flags -m32 and -m64

---

### Tasks

- Program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
  - The variable n will store a different value every time you will run this program
  - You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
  - The output of the program should be:
    - The number, followed by
      - if the number is greater than 0: is positive
      - if the number is 0: is zero
      - if the number is less than 0: is negative
    - followed by a new line
  - file: [0-positive_or_negative.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c)
  
- Program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
  - The variable n will store a different value every time you run this program
  - You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
  - The output of the program should be:
    - The string Last digit of, followed by
    - n, followed by
    - the string is, followed by
      - if n is greater than 5: the string and is greater than 5
      - if n is 0: the string and is 0
      - if n is less than 6 and not 0: the string and is less than 6 and not 0
    - followed by a new line
  - file: [1-last_digit.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c)
  
- Write a program that prints the alphabet in lowercase, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - All your code should be in the main function
  - You can only use putchar twice in your code
  - file: [2-print_alphabet.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)

- Write a program that prints the alphabet in lowercase, followed by a new line.
  - Print all the letters except q and e
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - All your code should be in the main function
  - You can only use putchar twice in your code
  - file: [4-print_alphabt.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c)
  
- Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - All your code should be in the main function
  - You can only use putchar three times in your code
  - file: [3-print_alphabets.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)
  
- Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
  - All your code should be in the main function
  - file: [5-print_numbers.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)
  
- Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
  - You are not allowed to use any variable of type char
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar twice in your code
  - All your code should be in the main function
  - file: [6-print_numberz.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c)
  
- Write a program that prints the lowercase alphabet in reverse, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - All your code should be in the main function
  - You can only use putchar twice in your code
- file: [7-print_tebahpla.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c)
  
- Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - All your code should be in the main function
  - You can only use putchar three times in your code
  - file: [8-print_base16.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c)

- Write a program that prints all possible combinations of single-digit numbers.
  - Numbers must be separated by ,, followed by a space
  - Numbers should be printed in ascending order
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - All your code should be in the main function
  - You can only use putchar four times maximum in your code
  - You are not allowed to use any variable of type char
  - file: [9-print_comb.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c)
  
- Write a program that prints the numbers from 00 to 99.
  - Numbers must be separated by ,, followed by a space
  - Numbers should be printed in ascending order, with two digits
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar five times maximum in your code
  - You are not allowed to use any variable of type char
  - All your code should be in the main function
  - file: [10-print_comb2.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/10-print_comb2.c)
  
- Write a program that prints all possible different combinations of two digits.
  - Numbers must be separated by ,, followed by a space
  - The two digits must be different
  - 01 and 10 are considered the same combination of the two digits 0 and 1
  - Print only the smallest combination of two digits
  - Numbers should be printed in ascending order, with two digits
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar five times maximum in your code
  - You are not allowed to use any variable of type char
  - All your code should be in the main function
  - file: [100-print_comb3.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c)
  
- Write a program that prints all possible different combinations of three digits.
  - Numbers must be separated by ,, followed by a space
  - The three digits must be different
  - 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
  - Print only the smallest combination of three digits
  - Numbers should be printed in ascending order, with three digits
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar six times maximum in your code
  - You are not allowed to use any variable of type char
  - All your code should be in the main function  
  - file: [101-print_comb4.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/101-print_comb4.c)

- Write a program that prints all possible combinations of two two-digit numbers.
  - The numbers should range from 0 to 99
  - The two numbers should be separated by a space
  - All numbers should be printed with two digits. 1 should be printed as 01
  - The combination of numbers must be separated by comma, followed by a space
  - The combinations of numbers should be printed in ascending order
  - 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
  - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
  - You can only use putchar eight times maximum in your code
  - You are not allowed to use any variable of type char
  - All your code should be in the main function
  - file: [102-print_comb5.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/102-print_comb5.c)
  
---

### Technologies Used
* Language: C
* Operating System: Ubuntu 14.04 LTS (Trusty64)
* Style: [Betty](https://github.com/holbertonschool/Betty)
* Compiler: GCC
---

### Author
Mitali Sengupta

<img src="http://pluspng.com/img-png/twitter-png-file-png-image-200.png" width=2% height=2%/> [@aadhibangalan](https://twitter.com/aadhibangalan) 

<img src="https://assets-cdn.github.com/images/icons/emoji/octocat.png" width=2% height=2%/>[MitaliSengupta](https://github.com/MitaliSengupta)
