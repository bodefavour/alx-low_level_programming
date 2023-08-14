#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations
 * of two digits in ascending order, excluding 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		int first_digit = i / 10;
		int second_digit = i % 10;

		if (first_digit < second_digit && i != 89)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');

			if (i < 90)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
