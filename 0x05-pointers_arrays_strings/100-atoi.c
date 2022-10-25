#include "main.h"

/**
 * _atoi - checks code
 * @s: converts str
 *
 * Return: int value
 */

int _atoi(char *s)
{
	int a, b, c, d;

	a = c = 0;
	d = 1;
	while ((*(s + a) < '0' || *(s + a) > '9') && (*(s + a) != '\0'))
	{
		if (*(s + a) == '-')
			d *= -1;
		a++;
	}
	b = a;
	while ((*(s + b) >= '0') && (*(s + b) <= '9'))
	{
		c = c * 10 + d * (*(s + b) - '0');
		b++;
	}
	return (c);
}
