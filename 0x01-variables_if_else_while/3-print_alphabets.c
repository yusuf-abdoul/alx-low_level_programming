#include <stdio.h>

/**
 * main - print alphabets in uppercase and lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	for (az = 'A'; az <= 'Z'; az++)
		putchar(az);
	putchar('\n');

	return (0);
}
