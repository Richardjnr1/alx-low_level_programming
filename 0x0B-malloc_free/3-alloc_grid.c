#include "main.h"
/**
 * alloc_grid -A function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **outcome;

	if (width <= 0 || height <= 0)
		return (NULL);
	outcome = malloc(sizeof(int) * height);

	if (outcome == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		outcome[i] = malloc(sizeof(int) * width);
		if (outcome == NULL)
		{
			free(outcome);
			for (j = 0; j <= height; j++)
				free(outcome[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			outcome[i][j] = 0;
	}
	return (outcome);
}

