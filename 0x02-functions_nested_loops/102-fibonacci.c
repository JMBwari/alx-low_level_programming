#include <stdio.h>

/**
* main - entry point
* Return: 0 if succesful
*/
int main(void)
{
	int i;

	for (i = 1; i < 51; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
			printf(", ");
		}

		if (i == 2)
		{
			printf("%d", i);
			printf(", ");
		}

		printf("%d", (i - 2) + (i - 1));
		
		if (i < 50)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
