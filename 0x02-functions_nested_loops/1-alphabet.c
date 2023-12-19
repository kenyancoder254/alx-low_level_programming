#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
