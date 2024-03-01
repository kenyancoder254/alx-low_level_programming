#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the no. of arguments in the program
 *
 * @argc: arguments
 * @argv: pointer to a character
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)**argv;

	if (argc >= 0)
		printf("%d\n", argc);
	return (0);
}
