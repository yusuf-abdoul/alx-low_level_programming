#include <stdio.h>

/**
 * main - prints alphabets in lower case excluding q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
			putchar(az);
	}

	putchar('\n');

	return (0);
}
