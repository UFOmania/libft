# Libft

My implementation of the Libft project from 1337 School.

## About

Libft is a custom C library that recreates common standard library functions and provides additional utilities for string manipulation, memory management, file descriptors, and linked lists.

The goal of this project is to gain a deeper understanding of how fundamental C functions work internally.

## Features

### Character Functions

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower

### String Functions

* ft_strlen
* ft_strdup
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strnstr
* ft_strjoin
* ft_substr
* ft_strtrim
* ft_split

### Memory Functions

* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_calloc

### Conversion Functions

* ft_atoi
* ft_itoa

### File Descriptor Functions

* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

### Linked List Functions (Bonus)

* ft_lstnew
* ft_lstadd_front
* ft_lstadd_back
* ft_lstlast
* ft_lstsize
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

## Build

Compile the library:

```bash
make
```

Create the bonus version:

```bash
make bonus
```

Remove object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

## Usage

Include the header:

```c
#include "libft.h"
```

Compile with:

```bash
cc main.c libft.a
```

