#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/**
 *  main - outputs the string value with n.
 *  Return: Always 0.
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last  > 5)
	{
		prinf("Last digit of %d is %d and is greater than 5", n, last);
	else if (last == 0)
	{
		prinf("Last digit of %d is %d and is 0", n, last);
	}
	else if (last < 6 && n != 0)

		prinf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	return (0);
}
