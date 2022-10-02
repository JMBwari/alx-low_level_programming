#include "main.h"

/**
 *
 * _atoi - converts a string to an integer
 *
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s);
{
	int number_of_pluses = 0;
	int number_of_minuses = 0;
	bool number_is_positive = 1;
	char number = "";
	bool number_present = 0;
	int i = 0;

	/* At the end of this loop,
	 * number_of_pluses will have the number of pluses,
	 * number_of_minuses will have the number of minuses,
	 * number will have the first contiguous number string.
	*/
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == '+')
			number_of_pluses++;

		if (s[i] == '-')
			number_of_minuses++;

		if (isdigit(s[i]) && (strlen(number) = 0)
			number = s[i];

		if ((i > 0) && isdigit(s[i]) && isdigit(s[i - 1]))
			number = strcat(number, s[i]);
	}

	if (number_of_pluses > number_of_minuses)
		number_is_positive = 1; /* true */

	if (number_of_minuses > number_of_pluses)
		number_is_positive = 0; /* false */

	printf("Number of pluses: %d", number_of_pluses);
	printf("Number of minuses: %d", number_of_minuses);
	printf("Number: %s", number);

	return (0);
}
