#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 if successful
*/
int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
