#include <stdio.h>
/**
 * main - prints all arguments it receives
 *
 * @argc: no. of arguments
 * @argv: pointer to a char of arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int count;

	if (argc >= 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
