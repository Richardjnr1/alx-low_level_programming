#include "main.h"
/**
 * rot13 -A function that encodes a string using rot13
 * @s: string encoded
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char *m = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *n = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
