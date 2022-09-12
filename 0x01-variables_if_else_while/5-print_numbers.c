#include <stdio.h>
/**
 * main - outputs numbers from 0 to 9
 *
 * Return: success (0)
 */
int main(void)
{
	char  num;

	for (num = '0'; num <= '9'; num++)
	{
		printf("%c", num);
	}
	putchar('\n');
	return (0);
}
