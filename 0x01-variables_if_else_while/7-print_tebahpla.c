#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char za;

	for (za = 'z'; za <= 'a'; za--)
		putchar(za);

	putchar('\n');

	return (0);
}
