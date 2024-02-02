#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: an array of integers
 * @n: index of the array
 * Return: null
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
