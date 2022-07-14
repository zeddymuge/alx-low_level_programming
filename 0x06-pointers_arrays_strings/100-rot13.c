#include "main.h"
/**
 * rot13 - encodes a string in rot13
 * @str: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *str)
{
	int u[] = {65, 69, 79, 84, 76};
	int l[] = {97, 101, 111, 116, 108};
	int x[] = {52, 51, 48, 55, 49};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == u[j] || str[i] == l[j])
			{
				str[i] = x[j];
				break;
			}
		}
		i++;
	}

	return (str);
}

