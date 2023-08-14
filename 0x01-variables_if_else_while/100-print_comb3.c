#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i = 0;

    while (i < 100)
    {
        putchar(i / 10 + '0');
        putchar(i % 10 + '0');

        if (i < 89)
        {
            putchar(',');
            putchar(' ');
        }

        i++;
    }

    putchar('\n');

    return 0;
}
