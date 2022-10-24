#include "main.h"

/**
 * _puts - checks code
 * @str: prints string
 *
 * Return void
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (*(str + a))
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
