#include "main.h"
/**
 * _strdup -A function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to newly copied memory
 */
char *_strdup(char *str)
{
	int i;
	char *c;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	c = malloc(sizeof(char) * count + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c[i] = str[i];
	return (c);
}
