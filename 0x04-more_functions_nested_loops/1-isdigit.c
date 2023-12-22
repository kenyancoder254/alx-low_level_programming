#include "main.h"
/**
 * _isdigit - checks for digits 0 through 9
 * @c: digit
 *
 * Return: 0 if its not a digit otherwise return non-zero value
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
