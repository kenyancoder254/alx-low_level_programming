#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
