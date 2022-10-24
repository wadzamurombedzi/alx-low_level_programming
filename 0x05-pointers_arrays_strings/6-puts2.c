#include "main.h"

/**
 * puts2 - checks code
 * @str: prints every other character of a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (*(str + a))
	{
		_putchar(*(str + a));
		a = a + 1;
	}
	_putchar('\n');
}

