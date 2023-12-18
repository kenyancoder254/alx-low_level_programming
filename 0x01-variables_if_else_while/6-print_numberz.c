#include <stdio.h>
/**
 * main - prints all digits of base 10 using putchar function
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
