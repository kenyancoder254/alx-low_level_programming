#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: no. of arguments
 * @argv: pointer to a character
 * Return: the result
 */
int main(int argc, char **argv)
{
	int result, operand_1, operand_2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	operand_1 = atoi(argv[1]);
	operand_2 = atoi(argv[2]);
	result = operand_1 * operand_2;
	printf("%d\n", result);
	return (0);
}
