#include <stdio.h>
/**
 *  main - prints out the alphabet in lower case
 *
 *  Return: always 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
