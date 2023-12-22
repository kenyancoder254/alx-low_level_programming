#include "main.h"
void printNum(void);
/**
 * more_numbers - prints 10 times the numbers 0 to 14
 *
 * Return: All the numbers
 */
void more_numbers(void)
{
	int i, x;

	for (x = 0; x < 9; x++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');

		}
		printNum();
		_putchar('\n');
	}
}
/**
 * printNum - prints no. 10 to 14
 *
 * Return: n/a
 */
void printNum(void)
{
	int i;

	for (i = 10; i <= 14; i++)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}
