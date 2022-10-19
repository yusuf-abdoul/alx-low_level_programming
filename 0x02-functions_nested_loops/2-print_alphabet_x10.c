#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char az;

	for (ten = 0; ten <= 9; ten++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n')
	}
}
