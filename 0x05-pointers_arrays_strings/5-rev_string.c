#include "main.h"

/**
 * rev_string - checks code
 * @s: takes string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int b;
	char str[446];

	a = 0;
	b = 0;
	while (*(s + a))
	{
		*(str + a) = *(s + a);
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		*(s + a) = *(str + b);
		b++;
		a--;
	}
}
