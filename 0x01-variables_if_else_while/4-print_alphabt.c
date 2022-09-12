#include <stdio.h>
/**
 * main - prints all lower case alphabet except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
			continue;
		if (ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
