#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strcpy - copies src to dest and returns dest
* @dest: destination string
* @src: source string
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	size_t i;
	size_t n = strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
