# Singly Linked Lists Pt 2

## What you should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:
- How to use linked lists
- Start to look for the right source of information without too much help

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Please use this data structure for this project:
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
     int n;
     struct listint_s *next;
} listint_t;
```

## Project
- Write a function that prints all the elements of a listint_t list.
- Write a function that returns the number of elements in a linked listint_t list.
- Write a function that adds a new node at the beginning of a listint_t list.
- Write a function that adds a new node at the end of a listint_t list.
- Write a function that free a listint_t list.
- Write a function that free a listint_t list.
- Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
- Write a function that returns the nth node of a listint_t linked list.
- Write a function that returns the sum of all the data (n) of a listint_t linked list.
- Write a function that inserts a new node at a given position.
- Write a function that deletes the node at index index of a listint_t linked list.
- Write a function that reverses a listint_t linked list.
- Write a function that prints a listint_t linked list.
- Write a function that free a listint_t list.
- Write a function that finds the loop in a linked list.
