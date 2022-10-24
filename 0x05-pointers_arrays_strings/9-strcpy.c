#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - checks code
 * @src: string pointed
 * @dest: the pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int b;

	b = 0;
	while (*(src + b))
	{
		*(dest + b) = *(src + b);
		b++;
	}
	*(dest + b) = '\0';
	return (dest);
}
