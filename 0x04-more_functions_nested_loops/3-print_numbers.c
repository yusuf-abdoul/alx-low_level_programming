#include "main.h"

/**
 *print_numbers - prints the numbers 0 to 9
 *
 *
 *Return: void
 *
 */
void print_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
		_putchar('0' + n);
	_putchar('\n');
}
