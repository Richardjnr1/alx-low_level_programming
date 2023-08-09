#include "main.h"
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to store in array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
