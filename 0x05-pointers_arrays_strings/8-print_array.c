#include "main.h"
#include <stdio.h>

/**
 * print_array - checks code
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		printf("%c", a[c]);
		if (c < (n - 1))
			printf(", ");
		c++;
	}
	_putchar('\n');
}
