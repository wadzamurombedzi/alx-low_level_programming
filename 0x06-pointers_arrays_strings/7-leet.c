#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int c, d;
	char a[] = "aAeEoOtT1=lL";
	char b[] = "4433007711";

	for (c = 0; *(s + c); c++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (a[d] == *(s + c))
				*(s + c) = b[d];
		}
	}
	return (s);
}

