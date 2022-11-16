#include "function_pointers_h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name)
}
