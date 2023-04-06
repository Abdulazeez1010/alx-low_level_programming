#include "main.h"

/**
 * is_prime_number - Determines if integer is a prime number
 * @n: The integer
 * Return: Return 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function for is_prime_number
 * @n : The integer
 * @i : Number to check if it's a factor of the integer
 * Return: Returns 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	int result;

	if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	result = is_prime_helper(n, i + 1);
	return (result);
}

