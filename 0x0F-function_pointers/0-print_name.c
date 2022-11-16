#include <stdio.h>
#include "function_pointers_h"
/**
 * print_name - function that prints a name passed to it
 * @name: char to display to the stdout
 * @f: A pointer function
 * author: Wadza
 * Return: No return cause we have declared void and r_type
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
