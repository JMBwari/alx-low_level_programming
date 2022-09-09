#include <stdlib.h>
#include <time.h>

/*
 * main - the program's entry point
 *
 * Return: 0 if success.
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf(n + "is positive\n");
	}
	else if (n == 0)
	{
		printf(n + "is zero\n");
	}
	else if (n < 0)
	{
		printf(n + "is negative\n");
	}


	return (0);
}


