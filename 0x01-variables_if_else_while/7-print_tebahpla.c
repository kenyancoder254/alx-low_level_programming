#include <stdio.h>
/**
 * main - prints lowercase letters in reverse
 *
 * Return: 0 if successful
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
