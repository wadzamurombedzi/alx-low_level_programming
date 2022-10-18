#include "main.h"

/**
 * _islowe - checks if a character is lowercase
 * @c:the character
 * Return: 1 if letter is lowercase, 0 if not
 */
int -islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
