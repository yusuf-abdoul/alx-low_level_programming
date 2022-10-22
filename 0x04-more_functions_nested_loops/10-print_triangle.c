#include "main.h"


/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, t
        if (size > 0)
        {
            for (a = 1; a <= size; a++)
            {
                for (t = size - a; t < a; t--)
                      _putchar(' ');
                for (t = 0; t < a; t++)
                      _putchar('#');

                if (a == size)
                    continue;
                _putchar('\n');

	    }
	 }
         _putchar('\n');
}
