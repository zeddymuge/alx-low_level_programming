# 0x07. C - Even more pointers, arrays and strings

### 0. 0-memset.c - Write a function that fills memory with a constant byte.



- Prototype: char *_memset(char *s, char b, unsigned int n);

- The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b

- Returns a pointer to the memory area s

- FYI: The standard library provides a similar function: memset. Run man memset to learn more.

### 1. 1-memcpy.c - a function that copies memory area.
- Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
- The _memcpy() function copies n bytes from memory area src to memory area dest
- Returns a pointer to dest 
- FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.

### 2. 2-strchr.c  - a function that locates a character in a string.
- Prototype: char *_strchr(char *s, char c);
- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
- FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.
