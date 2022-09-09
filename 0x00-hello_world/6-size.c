#include <stdio.h>

/**
 * main - the program's entry point.
 *
 * Return: always 0
 *
 * A program to print the sizes of various types.
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(lli));
	printf("Size of a float: %f byte(s)\n", sizeof(f));

	return (0);
}
