#include <stdio.h>

/**
 * main - prints all strings from 0-9
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
