#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
if (n > 0)
{
int i;
int j;

for (i = 0; i < n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
else
{
_putchar('\n');
}
}
