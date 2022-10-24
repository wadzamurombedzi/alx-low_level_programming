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
	c = n / 2;
	if (n % 2)
		c += 1;
	while (c < n)
	{
		_putchar(*(str + c));
		b++;
	}
	_putchar('\n');
}
