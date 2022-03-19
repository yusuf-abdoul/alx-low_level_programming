#include "main.h"


/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row = 0;
	int column = 0;
	int row_column_limit = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < row_column_limit; column++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			row_column_limit++;
		}

	}
}
