#include <stdio.h>

/**
 * print_times_table - function that prints the n times table
 * @n: integer
 * @i: integer 2
 * @j: integer 3
 * Return: Always 
 */

void print_times_table(int n)
{
    int i, j; // Declare variables at the start of the block in C90
    
    if (n < 0 || n > 15) {
        /* Check if n is outside the valid range, and don't print anything */
        return;
    }

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;
            printf("%-4d", result);  // Adjust spacing for alignment

            if (j < n) {
                printf(" ");  // Print a space between numbers
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a value for n (0 to 15): ");
    scanf("%d", &n);

    print_times_table(n);  // Call the function to print the times table
    return 0;
}

