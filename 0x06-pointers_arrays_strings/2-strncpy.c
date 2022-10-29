#include "main.h"


/**
 * _strncpy - copies a strings
 * @dest: the destinstaion string
 * @src: the source string
 * @n: number of by at mose from src to copy
 *
 * Return: a ponter to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
