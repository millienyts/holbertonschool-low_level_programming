#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	if (i % 2 == 0)
	{
		for (j = i / 2; j <= i; j++)
		{
			putchar(str[j]);
		}
	}
	else
	{
		for (j = (i + 1) / 2; j <= i; j++)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
