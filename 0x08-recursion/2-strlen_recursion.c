#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to  a string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i = strlen(s);

	}
	return (i);
}
