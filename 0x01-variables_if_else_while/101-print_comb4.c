#include <stdio.h>

/**
 *main - entry point
*
* Return: 0 if successful
*/
int main(void)
{
	/** our three loop variables */
	int i, j, k;

	/** loop for the first digit */
	for (i = 48; i < 58; i++)
	{
		/** loop for the second digit */
		for (j = 48; j < 58; j++)
		{
			/** loop for the third digit */
			for (k = 48; k < 58; k++)
			{
				/** checking that there is no duplication of any digit */
				if ((i == j) || (i == k) || (j == k))
				{
					continue;
				}

				/** checking that the digit combination is the smallest value.
				* For example, 012 is smaller than 102 which is smaller than 120, etc. 
				*/
				if ((i > j) || (j > k))
				{
					continue;
				}

				/** checking for the first combination (012) so that we don't put a comma and space before it. */
				if (!((i == 48) && (j == 49) && (k == 50)))
				{
					putchar(',');
					putchar(' ');
				}

				/** printing the combination of digits */
				putchar(i);
				putchar(j);
				putchar(k);
			}
		}
	}

	putchar('\n');

	return (0);
}
