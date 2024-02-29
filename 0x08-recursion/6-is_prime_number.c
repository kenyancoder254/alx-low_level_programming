#include "main.h"
/**
 * _is_prime_checker - checks if n is prime
 * @n: no. to be checked
 * @divisor: parameter
 * Return: 1 if in is prime otw return 0
 */
int _is_prime_checker(int n, int divisor)
{
	if (n <= 1)
		return (0);
	else if (divisor == 1)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (_is_prime_checker(n, divisor - 1));
}
/**
 * is_prime_number - checks if input integer is a prime number
 *
 * @n: number
 * Return: 1 if is prime 0 if its not prime
 */
int is_prime_number(int n)
{
	return (_is_prime_checker(n, n - 1));
}
