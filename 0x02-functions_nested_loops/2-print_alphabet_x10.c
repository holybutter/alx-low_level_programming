#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
