#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 * @c: The character to be checked
 * Return: 1 for lowercase characters or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	return (0);
}
