#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main _ Entry point
 *
 * Return: Always 0 (success)
 */

{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
