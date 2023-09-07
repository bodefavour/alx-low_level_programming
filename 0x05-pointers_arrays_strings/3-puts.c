#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string
 * @str: string to be printed
 * Return: 0
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++;
	}
}
