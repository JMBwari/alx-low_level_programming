#include <stdio.h>

int main(void)
{
	long long int n;

	n = 612852475143;

	long long int divisor = 2; largestFactor;

	while (n != 0)
	{
		if (n % divisor != 0)
		{
			divisor = divisor + 1;
		}
		else
		{
			largestFactor = n;

			n = n / divisor;

			if (n == 1)
			{
				printf("%lli", largestFactor);
				printf("\n");
				
				break;
			}
		}
	}

	return (0);
}
