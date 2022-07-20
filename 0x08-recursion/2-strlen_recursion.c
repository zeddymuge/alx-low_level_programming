#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: An input string to printing
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

