#include <stdio.h>

/**
* main - entry point
* Return: 0 if succesful
*/
int main(void)
{
	int i, first, second, next;

	first = 1;
	second = 2;
	next = first + second;

	printf("%d", first);
	printf(", ");

	printf("%d", second);
	printf(", ");

	for (i = 3; i < 51; i++)
	{
		printf("%d", next);
		
		first = second;
		second = next;
		next = first + second;

		if (i < 50)
		{
			printf(", ")
		}
	}

	printf("\n");

	return (0);
}
