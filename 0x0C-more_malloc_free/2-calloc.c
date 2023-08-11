#include "main.h"
/**
 * _calloc -A function that allocates memory for an array, using malloc
 * @nmemb: members of array
 * @size: size of array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *outcome;

	if (nmemb == 0 || size == 0)
		return (NULL);
	outcome = calloc(nmemb, size);
	if (outcome == NULL)
		return (NULL);
	else
		return (outcome);
}
