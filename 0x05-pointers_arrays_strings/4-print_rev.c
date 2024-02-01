#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: character pointer
 * Return: null
 */
void print_rev(char *s)
{
	int length, i;

	if (s == NULL)
	{
		return;
	}
	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
