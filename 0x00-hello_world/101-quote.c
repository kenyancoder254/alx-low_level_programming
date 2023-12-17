#include <unistd.h>
/**
 * main - prints a statement using write system call in C
 *
 * Return: 1 if successful
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, sizeof(message) - 1);
	return (1);
}
