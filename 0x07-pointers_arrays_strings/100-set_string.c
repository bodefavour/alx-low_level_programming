#include <stdio.h>
#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @*s: pointer to pointer we need to set to
 * @to: string to set
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
