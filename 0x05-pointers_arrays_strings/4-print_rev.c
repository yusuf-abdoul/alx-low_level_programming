#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: A pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int u = 0;

	/* move the pointer the end of the string */
	while (s[u] != '\0')
		u++;

	/* move back in reverse and print */
	for (u = u - 1; u >= 0; u--)

		_putchar(s[u]);

	_putchar('\n');
}
