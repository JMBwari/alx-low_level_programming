#include <stdio.h>
#include <stdint.h>

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("%li", n);
	printf("\n");

	return (0);
}
