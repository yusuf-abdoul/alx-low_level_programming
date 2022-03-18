#include "main.h"


/**
 * print_alphabet - Prints alphabet in lower cases
 *
 *
 * Return: No return value
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
