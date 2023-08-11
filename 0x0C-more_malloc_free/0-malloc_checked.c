#include "main.h"
/**
 * malloc_checked -A function that allocates memory using malloc
 * @b: size of memory allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
