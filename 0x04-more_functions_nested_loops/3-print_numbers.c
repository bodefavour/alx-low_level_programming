#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * 
 * Return: no return
 */

void print_numbers(void)

{
	int g;

	for (g = 0; g < 10; g++)
	{
		_putchar(g + '0');
	}

	_putchar('\n');
}
