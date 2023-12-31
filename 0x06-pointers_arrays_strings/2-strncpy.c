#include "main.h"
/**
 * _strncpy -A function that copies a strings
 * @dest : string 1
 * @src : string 2
 * @n : memory in byte
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
