#include <stdio.h>

/**
 * main - function that prints its name, followed by a new line.
 * @argc: the number of command line arguments.
 * @argv: the array that contains the program command line arguments
 *
 * Return: 0 (Always) success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
