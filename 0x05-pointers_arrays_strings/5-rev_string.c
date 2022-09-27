#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: variable string
 * Return: void
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i;

	for (i = 0; i < n / 2; i++)
	{
		char temp = s[i];

		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
}
