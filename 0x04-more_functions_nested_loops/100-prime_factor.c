#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int64_t n = 612852475143;
	int64_t i;

	for (i = 2ULL; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("d\n", n);

	return (0);
}
