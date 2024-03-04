#include "main.h"
/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: copy of the string
 *
 * Return: pointer to allocated space
 */
char *_strdup(char *str)
{
	char *copy;
	int length;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	copy = (char *)malloc((length + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);
	return (copy);
}
