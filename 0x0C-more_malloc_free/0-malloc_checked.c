#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of the memory
 * Return: pointer to allocate memory, if failed terminate with 98 status value
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
