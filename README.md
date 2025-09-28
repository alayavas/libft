# Libft

A custom implementation of the C standard library functions as part of the 42 School curriculum.

## Description

Libft is a project that involves recreating various functions from the C standard library. This library serves as a foundation for future projects at 42 School and provides a deeper understanding of how standard library functions work internally.

## Project Structure

```
libft/
├── ft_*.c          # Function implementations
├── libft.h         # Header file with function prototypes
├── Makefile        # Build configuration
└── README.md       # This file
```

## Functions Implemented

### Character Classification Functions
- [`ft_isalnum()`](ft_isalnum.c) - Check if character is alphanumeric
- [`ft_isalpha()`](ft_isalpha.c) - Check if character is alphabetic
- [`ft_isascii()`](ft_isascii.c) - Check if character is ASCII
- [`ft_isdigit()`](ft_isdigit.c) - Check if character is digit
- [`ft_isprint()`](ft_isprint.c) - Check if character is printable

### Character Conversion Functions
- [`ft_tolower()`](ft_tolower.c) - Convert character to lowercase
- [`ft_toupper()`](ft_toupper.c) - Convert character to uppercase

### String Functions
- [`ft_strlen()`](ft_strlen.c) - Calculate string length
- [`ft_strchr()`](ft_strchr.c) - Locate character in string
- [`ft_strrchr()`](ft_strrchr.c) - Locate character in string (reverse)
- [`ft_strncmp()`](ft_strncmp.c) - Compare strings up to n characters
- [`ft_strnstr()`](ft_strnstr.c) - Locate substring in string
- [`ft_strlcpy()`](ft_strlcpy.c) - Copy string with size limit
- [`ft_strlcat()`](ft_strlcat.c) - Concatenate strings with size limit
- [`ft_strdup()`](ft_strdup.c) - Duplicate string
- [`ft_substr()`](ft_substr.c) - Extract substring
- [`ft_strjoin()`](ft_strjoin.c) - Join two strings
- [`ft_strtrim()`](ft_strtrim.c) - Trim characters from string
- [`ft_split()`](ft_split.c) - Split string by delimiter
- [`ft_strmapi()`](ft_strmapi.c) - Apply function to each character
- [`ft_striteri()`](ft_striteri.c) - Apply function to each character with index

### Memory Functions
- [`ft_memset()`](ft_memset.c) - Fill memory with constant byte
- [`ft_bzero()`](ft_bzero.c) - Zero out memory
- [`ft_memcpy()`](ft_memcpy.c) - Copy memory area
- [`ft_memmove()`](ft_memmove.c) - Copy memory area (handles overlap)
- [`ft_memchr()`](ft_memchr.c) - Scan memory for character
- [`ft_memcmp()`](ft_memcmp.c) - Compare memory areas
- [`ft_calloc()`](ft_calloc.c) - Allocate and zero memory

### Conversion Functions
- [`ft_atoi()`](ft_atoi.c) - Convert string to integer
- [`ft_itoa()`](ft_itoa.c) - Convert integer to string

### Output Functions
- [`ft_putchar_fd()`](ft_putchar_fd.c) - Output character to file descriptor
- [`ft_putstr_fd()`](ft_putstr_fd.c) - Output string to file descriptor
- [`ft_putendl_fd()`](ft_putendl_fd.c) - Output string with newline to file descriptor
- [`ft_putnbr_fd()`](ft_putnbr_fd.c) - Output number to file descriptor

## Compilation

### Building the Library

To compile the library, use the provided Makefile:

```bash
make
```

This will create `libft.a` static library file.

### Available Make Targets

- `make` or `make all` - Compile the library
- `make clean` - Remove object files
- `make fclean` - Remove object files and the library
- `make re` - Clean and recompile everything

### Compilation Flags

The library is compiled with the following flags:
- `-Wall` - Enable all common warnings
- `-Wextra` - Enable extra warnings
- `-Werror` - Treat warnings as errors

## Usage

### Including in Your Project

1. Include the header file in your C source files:
```c
#include "libft.h"
```

2. Compile your project with the library:
```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    char *copy;
    
    printf("Original: %s\
", str);
    printf("Length: %zu\
", ft_strlen(str));
    
    copy = ft_strdup(str);
    printf("Copy: %s\
", copy);
    
    free(copy);
    return (0);
}
```

## Implementation Notes

### Recursive Implementations

Some functions like [`ft_strlen()`](ft_strlen.c) and [`ft_split()`](ft_split.c) use recursive approaches, demonstrating different programming paradigms while maintaining the same functionality as their standard library counterparts.

### Memory Management

Functions that allocate memory (like [`ft_strdup()`](ft_strdup.c), [`ft_split()`](ft_split.c), [`ft_calloc()`](ft_calloc.c)) return `NULL` on allocation failure. Always check return values and free allocated memory to prevent memory leaks.

### Error Handling

The library follows standard C library conventions for error handling:
- Functions return appropriate error values (NULL, -1, etc.) on failure
- No function calls `exit()` or terminates the program
- Input validation is performed where appropriate


## School

This project is part of the curriculum at **42 Kocaeli**.

## License

This project is created for educational purposes as part of the 42 School curriculum.
