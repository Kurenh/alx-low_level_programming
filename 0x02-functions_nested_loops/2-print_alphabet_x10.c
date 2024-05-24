#include "main.h"

/**
 * print_alphabet_x10 - write alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int b;

	b = 0;

	while (b < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		b++;
	}
}
