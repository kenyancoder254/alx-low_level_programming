#include "main.h"
/**
 * swap_int - swaps 2 integers
 *
 * @a: point to int
 * @b: pointer to int
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
