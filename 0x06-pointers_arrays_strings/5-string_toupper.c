#include "main.h"
/**
 * string_toupper - changes all lowercase characters str to uppercase
 *
 * @str: pointer to a string
 * Return: str
 */
char *string_toupper(char *str)
{
	char *original;

	original = str;
	while (*str)
	{
		*str = toupper((unsigned char) *str);
		str++;
	}
	return (original);
}
