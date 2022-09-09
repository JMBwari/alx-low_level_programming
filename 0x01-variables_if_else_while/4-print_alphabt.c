#include <stdio.h>

/**
 * main - entry point
 *
 * Return:0 if successful
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		/* We're ignoring q and e (113 is q, 101 is e) */
		if ((i != 113) && (i != 101))
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
