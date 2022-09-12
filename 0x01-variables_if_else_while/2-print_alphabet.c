#include <stdio.h>
/**
 *  main - prints out the alphabet in lower case
 *
 *  Return: always 0
 */
int main()
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
