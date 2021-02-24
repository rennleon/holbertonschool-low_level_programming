#include "holberton.h"

int newton_sqrt(int, int);

/**
 * _sqrt_recursion - Calculates the power x raised to y
 * @n: Number to calculate the square root of
 *
 * Return: Natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	if (n <= 1)
		return n;

	return newton_sqrt(n, n/2);
}

/**
 * newton_sqrt - Calculates the sqrt root of n based on Newton's rule
 * @n: Num to calculate the sqrt root
 * @x: Guess of sqrt root
 */
int newton_sqrt(int n, int x)
{
	int root = (x + (n / x)) / 2;

	if (root * root > n)
		return newton_sqrt(n, root);

	if (root * root == n)
		return root;

	/* If the root^2 is less than n means that n
	 * doesn't have natural square root
	 */
	return -1;
}
