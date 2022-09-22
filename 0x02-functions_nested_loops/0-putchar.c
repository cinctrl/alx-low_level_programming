#include <main.h>
/**
 * main - outputs '_putchar' followed by new line
 *
 * Return: 0
 */
int main(void)
{
	char val[] = "_putchar";

	for (int c = 0; c < 8; c++)
	{
		_putchar(val[c]);
	}

	_putchar('\n');
	return (0);
}
