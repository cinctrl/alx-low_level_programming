#include <stdio.h>
/**
 * main -prints combination of three digits seperatd bt commaand space
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
	for (c = '0'; c <= '9'; c++)
	{
		if (a < b && b < c)
		{
			putchar(a);
			putchar(b);
			putchar(c);
			if (a != '8' || (a == '8' && b != '9'))
			{
				if (a == '7' && b == '8' && c == '9')
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	}
	}

	putchar('\n');
	return (0);
}
