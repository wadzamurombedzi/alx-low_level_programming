#include "main.h"

/**
 * swap_int - checks the code
 * @a: swaps
 * @b: swaps
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
