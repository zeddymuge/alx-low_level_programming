#include <stdio.h>
/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int first_no = 0;
	int second_no = 1;
	int next_no;

	for (i = 0 ; i < 98 ; i++)
	{
		if (i <= 1)
			next_no = i;
		else
		{
			next_no = first_no + second_no;
			first_no = second_no;
			second_no = next_no;

			if (next_no > 98)
			{
				break;
			}
		}
		 printf("%d  ", next_no);
	}

	return (0);
}

