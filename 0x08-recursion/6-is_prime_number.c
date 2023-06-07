#include "main.h"

/**
 * is_prime_number - The function checks if the input integer is a prime number
 * @n : The integer to check if prime
 * Return: Returns 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_helper(2, n));
}

/**
 * is_prime_number_helper - Helper function
 * @i : Counter`
 * @n : The integer to check if prime
 * Return: Returns 1 if prime, 0 otherwise
 */
int is_prime_number_helper(int i, int n)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number_helper(i + 1, n));
}
