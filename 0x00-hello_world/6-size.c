#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char myChar;
	int myInt;
	long int mylongint;
	long long int LLI;
	float myFloat;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(myChar));         printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(myInt));         printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof
(myLongInt));
        print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof
(LLI));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(myFloat));
	return (0);
}
			
