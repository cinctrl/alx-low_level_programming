#include <stdio.h>
/**
 * main - prints all lower case alphabet except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch < 'z')
	{
		putchar(ch);
		if (ch == 'q' || ch == 'e')
			continue;
		ch++;
	}
		putchar('\n');
}

