#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: n/a
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
