#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character
 *
 * Return: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
