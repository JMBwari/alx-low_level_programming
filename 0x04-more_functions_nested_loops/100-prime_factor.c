#include <stdio.h>

int main(void)
{
	unsigned long long n = 612852475143;
	unsigned long long i;

	for (i = 2ULL; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("llu\n", n);

	return (0);
}
