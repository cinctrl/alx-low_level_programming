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
	int j;

	for (digit = '0'; digit <= '9'; digit++)
	{
		for (j = '0'; j <= '9'; j++)
		{

			if (digit < j)
			{
				putchar(digit);
				putchar(j);
				if (digit != '8' || (digit == '8' && j != '9'))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

