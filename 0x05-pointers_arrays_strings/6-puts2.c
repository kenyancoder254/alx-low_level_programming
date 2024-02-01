#include "main.h"
/**
 * puts2 - prints every other char of a string starting with the 1st char
 *
 * @str: character pointer to a string
 * Return: null
 */
void puts2(char *str)
{
	int length, i;

	if (str == NULL)
	{
		return;
	}
	length = strlen(str);
	for (i = 0; i <= length - 1; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
