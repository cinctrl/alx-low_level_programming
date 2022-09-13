#include <stdio.h>
/**
 * main -prints single digit numbers with comma and space follow by new line
 *
 * Return: success 0
 *
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
