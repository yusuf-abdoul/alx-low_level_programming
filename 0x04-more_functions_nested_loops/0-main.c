#include "main.h"


/**
 * main - entry point of the program
 *
 * Return: always return (success)
 */
int main(void)
{
	if (_isupper('A') == 1)
		_putchar('1');
	else
		_putchar('0');

	_putchar('\n');

	if (_isupper('a') == 0)
		_putchar('1');
	else
		_putchar('0');
	_putchar('\n');

	return (0);
}
