#include "main .h"

/**
 * _memset - fills memory area
 * @s: pointer to memory area to be filled
 * @b: value to fill memory area
 * @n: number of bytes
 *
 * Return: pointer to fill the area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
