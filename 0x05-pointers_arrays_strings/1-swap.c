#include "main.h"
/**
 *swap_int -A function that swaps the values of two integers
 *@a : integer to swap 1
 *@b : integer to swap 2
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
