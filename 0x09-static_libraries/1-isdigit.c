#include "main.h"

/**
 * _isdigit -checks is a char is a digit
 * @c: int to be ckecked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
