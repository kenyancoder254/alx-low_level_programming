#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: no of arguments
 * @argv: pointer to character
 * Return: result\n
 */
int main(int argc, char **argv)
{
	int count, num;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (count = 0; count < argc; count++)
	{
		num += atoi(argv[count]);
	}
	printf("%d\n", num);
	return (0);
}
