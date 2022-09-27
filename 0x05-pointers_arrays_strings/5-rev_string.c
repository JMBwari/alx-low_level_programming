#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: variable string
 * Return: void
 */
void rev_string(char *s)
{
	size_t i; /*the loop variable*/
	string temp = s;
	int tempIndex = 0;

	for (i = strlen(s); i > 0; i--)
	{
		temp[tempIndex] = s[i];
		tempIndex++;
	}

	s = temp;
}
