#include "main.h"

/**
 * print_rev - checks code
 * @s: takes string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (*(s + a))
		a++;
	a = a - 1;
	while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}
