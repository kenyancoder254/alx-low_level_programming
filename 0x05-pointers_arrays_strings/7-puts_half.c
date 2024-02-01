#include "main.h"
/**
 * puts_half - prints the other half of a string
 *
 * @str: character pointer of a string
 * Return: null
 */
void puts_half(char *str)
{
	int length, i, half, n;

	length = strlen(str);
	half = length / 2;
	if (str == NULL)
	{
		return;
	}
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		for (i = n; i <= length - 1; i++)
		{
			putchar(str[n]);
		}
		putchar('\n');
	}
	for (i = half; i <= length - 1; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
