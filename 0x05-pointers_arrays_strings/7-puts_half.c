#include "main.h"

/**
 * puts_half - check the code
 * @str: takes half of code
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int c;

	n = 0;
	while (*(str + n))
		n++;
	b = n / 2;
	if (n % 2)
		b += 1;
	while (b < n)
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
