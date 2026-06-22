# Libft

My implementation of the Libft project from 1337 School.

## About

Libft is a custom C library that recreates common standard library functions and provides additional utilities for string manipulation, memory management, file descriptors, and linked lists.


All the functions are built with free and close in mind,
<img width="687" height="202" alt="Screenshot_20260622_225737" src="https://github.com/user-attachments/assets/cbbd3594-a109-46f5-8448-1a7f647f7541" />


At any fail point I have to free any alocated memory or opened file descriptor to avoid memory/fd leak.
<img width="800" height="385" alt="Screenshot_20260622_225801" src="https://github.com/user-attachments/assets/fdd5ad8d-f60b-48ca-a29d-170b2a28d00b" />



The goal of this project is to gain a deeper understanding of how fundamental C functions work internally.

## Features

### Character Functions

* ft_isalpha  -> is a-Z
* ft_isdigit  -> is 1-9
* ft_isalnum  -> is 1-9 a-Z
* ft_isascii  -> 0-127
* ft_isprint  -> is printable char

* ft_toupper  -> a->A
* ft_tolower  -> A->a

### String Functions

* ft_strlen    -> "hello" = 6
* ft_strdup    -> "hello" allocate new "hello" on the heap
* ft_strchr    -> "hello" 'l' look for 'l' in "hello" 
* ft_strrchr   -> "hello" 'l' look for 'l' in "hello" start from the end
* ft_strncmp   -> compare two strings
* ft_strnstr   -> look for str1 in str2
* ft_strjoin   -> join two string and return the allocated result
* ft_substr    -> return an allocated part of a string
* ft_strtrim   -> trim set of characters from a edges and return the result allocated
* ft_split     -> split the str based on the given charcter and return an allocated double array char **;

### Memory Functions

* ft_memset    -> set a memory region to a givin byte
* ft_bzero     ->  set a memory region to 0
* ft_memcpy    ->  copy a memory region to another region
* ft_memmove   ->  copy a memory region to another region with overlapping in mind
* ft_memchr    -> look for a byte in char*
* ft_memcmp    -> compaire two memory regions
* ft_calloc    -> allocate a memory chunck and init it to 0

### Conversion Functions

* ft_atoi  -> ascii to int
* ft_itoa  -> int to ascii

### File Descriptor Functions

* ft_putchar_fd  -> write a char to fd
* ft_putstr_fd   -> write a char* to fd
* ft_putendl_fd  -> write a char* with new line at the end to fd
* ft_putnbr_fd   -> wtite a number to fd

### Linked List Functions (Bonus)

* ft_lstnew          -> create a linked list node
* ft_lstadd_front    -> push a node to the front of the linked list
* ft_lstadd_back     -> push a node to the back of the linked list
* ft_lstlast         -> return the last node in the linked list
* ft_lstsize         -> return linked list size
* ft_lstdelone       -> delete the linked list node (free)
* ft_lstclear        -> clear all nodes in linked list
* ft_lstiter         -> iterate on nodes and apply custom func
* ft_lstmap          -> create a new edited copy of list with custom func

## Build

build the lib with Makefile using make
make , make bonus, make clean, make fclean, make re

<img width="687" height="653" alt="Screenshot_20260622_223033" src="https://github.com/user-attachments/assets/69deb377-d460-434e-bb25-716ae9e1567d" />

<img width="687" height="202" alt="Screenshot_20260622_223056" src="https://github.com/user-attachments/assets/60a8b5a6-e198-4b20-8578-3894b62be3e4" />


