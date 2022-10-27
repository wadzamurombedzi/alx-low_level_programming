#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
