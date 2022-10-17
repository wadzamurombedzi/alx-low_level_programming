#include <stdio.h>
/**
 * main - print out sizes of varios types
 * Return - Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ld byte(s)\n", (signed long)sizeof(a));
	printf("Size of an int: %ld byte(s)\n", (signed long)sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", (signed long) sizeof(c));
	printf("Size of a long long int:%ld byte(s)\n", (signed long)sizeof(d));
	printf("Size of a float: %ld byte(s)\n", (signed long)sizeof(f));
	return (0);
}
