#include "main.h"
/**
 * _strncat - concatenates 2 strings
 *
 * @dest: destinatio of copied string
 * @src: source of copied string
 * @n: max no. of characters to be appended to dest
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
