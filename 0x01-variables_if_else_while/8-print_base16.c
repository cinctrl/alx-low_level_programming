#include <stdio.h>
/**
 * main - prints first 16 digit in hexadecimal.
 *
 * Return: always 0
 */
int main(void)
{
	int num;
	char c = 'a';

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar(num + '0');
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
