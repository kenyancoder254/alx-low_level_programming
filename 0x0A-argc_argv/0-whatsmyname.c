#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 *
 * @argc: no of arguments
 * @argv: pointer to a string
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
