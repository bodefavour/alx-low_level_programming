#include <stdio.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int divisor = 1;
    while (n / divisor > 9) {
        divisor *= 10;
    }

    while (divisor > 0) {
        _putchar(n / divisor + '0');
        n %= divisor;
        divisor /= 10;
    }
}

int main(void) {
    int num = 12345;
    print_number(num);

    return 0;
}

