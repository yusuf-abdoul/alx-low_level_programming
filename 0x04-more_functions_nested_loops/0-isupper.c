#include "main.h"

/**
 * _isupper - check if character is upper case
 * @c: character to be checked
 *
 * Return: 1 if c is an uppercase 0 otherwhise
 */
int _isupper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
