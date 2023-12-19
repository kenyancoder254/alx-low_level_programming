#include "main.h"
/**
 * print_last_digit - prints the value of the last digit
 * @i: the number
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int positiveNum, last_digit;

	positiveNum = (i < 0) ? -i : i;
	last_digit = positiveNum % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
