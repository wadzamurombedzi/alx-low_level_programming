#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int b0, b1, b2, b3, b4, b5, b6, b7, b8;

	a0 = n / 1000000000;
	b0 = a0;
	a1 = (n / 100000000) % 10;
	b1 = b0 + a1;
	a2 = (n / 10000000) % 10;
	b2 = b1 + a2;
	a3 = (n / 1000000) % 10;
	b3 = b2 + a3;
	a4 = (n / 100000) % 10;
	b4 = b3 + a4;
	a5 = (n / 10000) % 10;
	b5 = b4 + a5;
	a6 = (n / 1000) % 10;
	b6 = b5 + a6;
	a7 = (n / 100) % 10;
	b7 = b6 + a7;
	a8 = (n / 10) % 10;
	b8 = b7 + a8;
	a9 = (n % 10);
	if (n < 0)
	{
		_putchar('_');
		a0 *= -1;
		a1 *= -1;
		a2 *= -1;
		a3 *= -1;
		a4 *= -1;
		a5 *= -1;
		a6 *= -1;
		a7 *= -1;
		a8 *= -1;
		a9 *= -1;
	}
	if (b0 != 0)
		_putchar('0' + a0);
	if (b1 != 0)
		_putchar('0' + a1);
	if (b2 != 0)
		_putchar('0' + a2);
	if (b3 != 0)
		_putchar('0' + a3);
	if (b4 != 0)
		_putchar('0' + a4);
	if (b5 != 0)
		_putchar('0' + a5);
	if (b6 != 0)
		_putchar('0' + a6);
	if (b7 != 0)
		_putchar('0' + a7);
	if (b8 != 0)
		_putchar('0' + a8);
}







