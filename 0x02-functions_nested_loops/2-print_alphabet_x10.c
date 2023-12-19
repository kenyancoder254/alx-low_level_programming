#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 *
 * Return: 0 if successful
 */
void print_alphabet_x10(void)
{
	int i;
	char lower;

	i = 1;
	while (i <= 10)
	{
		lower = 'a';
		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');
		i++;
	}
}
