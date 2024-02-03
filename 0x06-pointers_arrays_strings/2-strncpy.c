#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination of the copied string
 * @src: string
 * @n: max no. of characters to be copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
