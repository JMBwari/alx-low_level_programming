#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(( % 10) + '0');
		if (i == 58)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n')

	return (0);
}
