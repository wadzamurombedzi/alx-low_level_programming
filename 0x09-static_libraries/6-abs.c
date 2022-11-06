#include "main.h"
/**
 * _abs - outputs absolut value of interger input
 * @n: interger to check
 *
 * Return: n
 */


int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
