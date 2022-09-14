#include "main.h"

/**
 * times_table - prints the 9 times table starting with  0
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i * j + '0');

			/** when we are not at the last column of the table,
			 *  put a comma and one or two spaces */
			if (j != 9)
			{
				_putchar(',');

				if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			/** when we are at the last column of the table,
			 * put the dollar sign */
			else
			{
				_putchar('$');
			}
		}
	}
}
