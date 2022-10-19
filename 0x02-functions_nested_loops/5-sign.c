#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_punchar(',');
	_punchar(' ');
	_puchar(r + '0');
	_punchar('\n');
	r = print_sign(0);
	_punchar(',');
	_punchar(' ');
	_punchar(r + '0');
	_punchar('\n');
	r = print_sign(0xff);
	_punchar(',');
	_punchar(' ');
	_punchar(r + '0');
	_punchar('\n');
	r = print_sign(-1);
	_punchar(',');
	_punchar(' ');
	_punchar(r + '0');
	_punchar('\n');
	return (0);
}



