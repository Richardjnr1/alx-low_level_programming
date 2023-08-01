#include "main.h"
/**
 * _memcpy -A function that copies memory area
 * @src: source location copied from
 * @dest: destination location
 * @n: number of memory bytes copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

