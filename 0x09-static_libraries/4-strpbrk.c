#include "main.h"

/**
 * _strpbrk - searches string from bytes
 * @s: string to be searched
 * @accept: bytes to be searched for
 *
 * Return: pointer to be matched byte if set is matched or NULL if it is not
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
