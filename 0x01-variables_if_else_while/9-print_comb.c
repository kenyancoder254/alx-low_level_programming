#include <stdio.h>
/**
 * main - prints all digits of base 10 followed by a ',' and space
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
