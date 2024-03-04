#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: str to be joined
 * @s2: string to be joined
 * Return: NULL on failure pointer to allocated memory on success
 */
char *str_concat(char *s1, char *s2)
{
	int length;
	char *result;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	length = strlen(s1);
	result = (char *)malloc(sizeof(char) * length + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
