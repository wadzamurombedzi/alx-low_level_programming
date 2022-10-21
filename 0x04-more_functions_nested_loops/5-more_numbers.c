#include "main.h"

/**
 * more_numbers - prints 01234567891011121314\n x10
 * Return: void
 */


void more_numbers(void)
{
	char a, b, c, d;

	for (d = 0; d < 10; d++)
	{
		for (c = 0, c <= 14; c++)
		{
			if (c < 10)
				b = c;
			else
			{

				_putchar('0' + a);
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}

