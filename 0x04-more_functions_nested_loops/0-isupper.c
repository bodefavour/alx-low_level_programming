#include "main.h"

/**
 * _isupper(int c) - a function that checks for uppercase characte
 * @c: Charater to be checked
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)

{
	char c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
