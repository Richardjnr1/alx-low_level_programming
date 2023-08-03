#include "main.h"
/**
 * _puts_recursion -A function that prints a string, followed by a new line
 * @s: string to be printed
 * Return: 0 Always
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
