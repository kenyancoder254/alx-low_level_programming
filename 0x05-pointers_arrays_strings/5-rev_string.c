#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: character pointer
 * Return: null
 */
void rev_string(char *s)
{
	int len, start, end, temp;

	len = strlen(s);
	start = 0;
	end = len - 1;
	for (start = 0; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
