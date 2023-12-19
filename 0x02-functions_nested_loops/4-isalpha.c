#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: ascii representation
 *
 * Return: 1 if c is alphabetic otherwise return 0
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
