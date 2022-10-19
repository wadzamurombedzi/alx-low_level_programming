#include "main.h"

/**
 *print_last_digit - prints last digit of integer input
 *@n: integer to modify
 *
 *Return: 1
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = -1;
	_putchar(i + '0');

	return (i);
}
