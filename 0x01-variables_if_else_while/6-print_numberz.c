#include <stdio.h>
/**
 * main - prints simgle digit number from 1 to 10 without using type char
 *
 * Return: success 0
 */
int main()
{
	int a;

	for(a ='0'; a <= '9';a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
