#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be inputed
 * Return: no return
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		putchar(s[count]);
	putchar('\n');
}
