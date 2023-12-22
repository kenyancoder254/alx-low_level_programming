#include "main.h"
/**
 * print_line - prints "_" character n times
 * @n: no. of times to print
 *
 * Return: n/a
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
