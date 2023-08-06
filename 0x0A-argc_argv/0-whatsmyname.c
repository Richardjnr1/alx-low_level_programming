#include <stdio.h>
/**
 * main -A program that prints its name
 * @argc : Argument count
 * @argv : Array of string holding argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
