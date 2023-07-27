#include "main.h"
/**
 * _strncat -A function that concatenates two strings
 * @dest : string 1
 * @src : string 2
 * @n : number in bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);

	int j;

	for (j = 0; j < n && *src != '\0'; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] = '\0';
	return (dest);
}
