#include "main.h"
/**
 * _strcat -A function that concatenates two strings
 * @src : source string
 * @dest : destination string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
