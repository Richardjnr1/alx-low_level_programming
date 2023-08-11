#include "main.h"
/**
 * array_range -A function that creates an array of integers
 * @min: min values in the array
 * @max: max values in the array
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int len, i;
	int *outcome;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	outcome = malloc(sizeof(int) * len);
	if (!outcome)
		return (NULL);
	for (i = 0; i < len; i++)
		outcome[i] = min++;
	return (outcome);
}

