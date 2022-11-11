#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @s: the amount of memory to allocate
 *
 * Return: A void pointer
 */
void *malloc_checked(unsigned int s)
{
	void *ptr = malloc(s);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
