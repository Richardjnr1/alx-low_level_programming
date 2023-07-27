#include "main.h"
/**
 * leet -A function that encodes a string into 1337
 *@s: string to be encoded
 * Return: string encoded
 */
char *leet(char *s)
{
	int i, j;
	char *m = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == m[j])
				s[i] = n[j];
		}
	}
	return (s);
}

