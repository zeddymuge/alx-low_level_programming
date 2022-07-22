## 0x09. C - Static libraries

### 0. libmy.a, main.h -A library is not a luxury but one of the necessities of life
- Create the static library libmy.a containing all the functions listed below:

- - - - int _putchar(char c);

int _islower(int c);

int _isalpha(int c);

int _abs(int n);

int _isupper(int c);

int _isdigit(int c);

int _strlen(char *s);

void _puts(char *s);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);


- -  - -Wall -pedantic -Werror -Wextra -c \*.c



ar -rc libholberton.a \*.o



ar -t libholberton.a



0-isupper.o

0-memset.o

0-strcat.o

1-isdigit.o

1-memcpy.o

1-strncat.o

100-atoi.o

2-strchr.o

2-strlen.o

2-strncpy.o

3-islower.o

3-puts.o

3-strcmp.o

3-strspn.o

4-isalpha.o

4-strpbrk.o

5-strstr.o6-abs.o

6-abs.o

9-strcpy.o

\_putchar.o



ranlib libholberton.a



creat a main.c file



gcc main.c -L. -lholberton -o quote
- If you haven’t coded all of the above functions create empty ones with the right prototype.
- Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

### 1. create_static_lib.sh - Without libraries what have we? We have no past and no future
- Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
