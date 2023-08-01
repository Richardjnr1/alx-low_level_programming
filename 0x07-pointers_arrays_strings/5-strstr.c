#include "main.h"
/**
 * _strstr -A function that locates a substring
 * @haystack: string to locate from
 * @needle: substring to be located
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *i = needle;

		while (*h == *i && *i != '\0')
		{
			h++;
			i++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}
