#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: intergere to be filled:wq
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
