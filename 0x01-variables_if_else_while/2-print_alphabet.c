#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
