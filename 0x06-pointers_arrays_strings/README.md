0. 0-strcat.c - Write a function that concatenates two strings.



Prototype: char *_strcat(char *dest, char *src);

This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte

Returns a pointer to the resulting string dest

FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
1. 1-strncat.c - Write a function that concatenates two strings.



Prototype: char *_strncat(char *dest, char *src, int n);

The _strncat function is similar to the _strcat function, except that

it will use at most n bytes from src; and

src does not need to be null-terminated if it contains n or more bytes

Return a pointer to the resulting string dest

FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.
2. 2-strncpy.c - Write a function that copies a string.



Prototype: char *_strncpy(char *dest, char *src, int n);

Your function should work exactly like strncpy

FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.
3. 3-strcmp.c - Write a function that compares two strings.



Prototype: int _strcmp(char *s1, char *s2);

Your function should work exactly like strcmp

FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.
4. 4-rev_array.c - Write a function that reverses the content of an array of integers.



Prototype: void reverse_array(int *a, int n);

Where n is the number of elements of the array
5. 5-string_toupper.c - Write a function that changes all lowercase letters of a string to uppercase.



Prototype: char *string_toupper(char *);
6. 6-cap_string.c - Write a function that capitalizes all words of a string.



Prototype: char *cap_string(char *);

Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
