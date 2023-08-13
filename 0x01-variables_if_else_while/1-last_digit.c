#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Calculate the last digit */
	int last_digit = n % 10;

	ptintf("Last digit of %d is %d and is "
	return (0);
}
