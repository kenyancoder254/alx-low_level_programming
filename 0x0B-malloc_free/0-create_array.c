#include "main.h"
/**
 * create_array - creates an array of chars, & initializes with a specific char
 *
 * @size: size of buffer
 * @c: character
 * Return: NULL if size = 0, NULL if it fails, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Check if the size is null */
	if (size == 0)
		return (NULL);
	/* allocate memory to ther array */
	array = (char *)malloc(size * sizeof(char));
	/* check if memory allocation failed */
	if (array == NULL)
		return (NULL);
	/* Initialize the array */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
