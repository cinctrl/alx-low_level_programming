#include "main.h"
/**
 * main - outputs '_putchar' followed by new line
 *
 * Return: 0
 */
int main(void)
{
	char val[] = "_putchar";
	int c;
	while (c < 8)
	{
		_putchar(val[c]);
		c++;
	}

	_putchar('\n');
	return (0);
}
