<p align="left">
  <img src="https://i.redd.it/ezr1upzdhmjz.jpg" width=25% height=25% />
</p> 

## 0x00-hello_world

### Description

The first project out of many to learn and understand deeply how C programming works. Learning and applying C concepts to solidify understanding of the language.

### Project Takeaways

- Why C programming is awesome (don’t forget to tweet today, with the hashtag #cisfun :))
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official Holberton C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

### Tasks

- Write a script that runs a C file through the preprocessor and save the result into another file.
  - The C file name will be saved in the variable $CFILE
  - The output should be saved in the file c
  - file: [0-preprocessor](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/0-preprocessor)
  
- Write a script that compiles a C file but does not link.
  - The C file name will be saved in the variable $CFILE
  - The output file should be named the same as the C file, but with the extension .o instead of .c.
    - Example: if the C file is main.c, the output file should be main.o
  - file: [1-compiler](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/1-compiler)
  
- Write a script that generates the assembly code of a C code and save it in an output file.
  - The C file name will be saved in the variable $CFILE
  - The output file should be named the same as the C file, but with the extension .s instead of .c.
     - Example: if the C file is main.c, the output file should be main.s
  - file: [2-assembler](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/2-assembler)

- Write a script that compiles a C file and creates an executable named cisfun.
  - The C file name will be saved in the variable $CFILE
  - file: [3-name](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/3-name)
  
- Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
  - Use the function puts
  - You are not allowed to use printf
  - Your program should end with the value 0
  - file: [4-puts.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/4-puts.c)
  
- Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
  - Use the function printf
  - You are not allowed to use the function puts
  - Your program should return 0
  - Your program should compile without warning when using the -Wall gcc option
  - file: [5-printf.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/5-printf.c)
  
- Write a C program that prints the size of various types on the computer it is compiled and run on.
  - You should produce the exact same output as in the example
  - Warnings are allowed
  - Your program should return 0
  - You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option
  - file: [6-size.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/6-size.c)
  
- Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.
  - Use gcc as the compiler

**Blogpost**

<p align="left">
<img src="https://cdn-images-1.medium.com/max/1600/1*bsRSU7E8DLXq0rs5o7SF0w.jpeg" width=25% height=25% />
</p>

[Medium Article: What happens when you type gcc main.c?](https://medium.com/@mitali.s.auger/learning-c-what-happens-when-you-type-gcc-main-c-ff4693178fc4)

- Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
  - The C file name will be saved in the variable $CFILE.
  - The output file should be named the same as the C file, but with the extension .s instead of .c.
    - Example: if the C file is main.c, the output file should be main.s
  - file: [100-intel](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/100-intel)
  
- Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
  - You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
  - Your program should return 1
  - Your program should compile without any warnings when using the -Wall gcc option
  - file: [101-quote.c](https://github.com/MitaliSengupta/holbertonschool-low_level_programming/blob/master/0x00-hello_world/101-quote.c)

---

### Technologies Used
* Language: C
* Operating System: Ubuntu 14.04 LTS (Trusty64)
* Style: [Betty]()
* Compiler: GCC
---

### Author
Mitali Sengupta

<img src="http://pluspng.com/img-png/twitter-png-file-png-image-200.png" width=2% height=2%/> [@aadhibangalan](https://twitter.com/aadhibangalan) 

<img src="https://assets-cdn.github.com/images/icons/emoji/octocat.png" width=2% height=2%/>[MitaliSengupta](https://github.com/MitaliSengupta)
