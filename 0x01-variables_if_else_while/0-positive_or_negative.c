#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d\n", n);
	if (n > 0)
	{
		printf("if the number is greater than 0: is positive\n");
	else if (n == 0)
	{
		printf("if the number is 0: is zero\n");
	}
	else if (n < 0)
	{
		printf("if the number is less than 0: is negative\n");
	}

	return (0);
}
