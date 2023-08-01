#include <string.h>
#include <stdio.h>
/**
 * _strchr -A function that locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
