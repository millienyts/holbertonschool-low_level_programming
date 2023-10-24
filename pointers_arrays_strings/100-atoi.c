#include "main.h"
/**
 * _atoi - Convert string to an integer.
 * @s: Pointers to a character string
 *
 * Return: void
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char *tmp;

	tmp = s;

	while (*tmp != '\0' && (*tmp < '0' || *tmp > '9'))
	{
		if (*tmp == '-')
			sign *= -1;

		tmp++;
	}
	if (*tmp != '\0')
	{
		do {
			num = num * 10 + (*tmp - '0');
			tmp++;
		} while (*tmp >= '0' && *tmp <= '9');

	}
	return (num * sign);

}
