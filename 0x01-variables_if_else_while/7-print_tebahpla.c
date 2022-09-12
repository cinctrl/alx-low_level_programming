#include <stdio.h>
/**
 * main - outputs alphabet in reverse other
 *
 * Return: success 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
