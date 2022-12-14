#include <stdio.h>

/**
* main - entry point
* Return: 0 if succesful
*/
int main(void)
{
	int i;
	long first, second, next;

	first = 1;
	second = 2;
	next = first + second;

	printf("%li", first);
	printf(", ");

	printf("%li", second);
	printf(", ");

	for (i = 3; i < 51; i++)
	{
		printf("%li", next);

		first = second;
		second = next;
		next = first + second;

		if (i < 50)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
