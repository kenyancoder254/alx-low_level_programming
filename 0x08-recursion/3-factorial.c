#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *
 * @n: number to find the factorial for
 * Return: -1 if n is lower than 0, 1 if n is 0, n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
