#include <stdio.h>
#include "main.h"

/**
 * _isupper(int c) - a function that checks for uppercase characte
 * @c: Charater to be checked
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)

{
	char c;
	if (c >= "A" && c<="Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
