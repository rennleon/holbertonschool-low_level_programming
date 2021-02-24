#include "holberton.h"
#include <stdio.h>

int brute_force_sqrt(int, int);
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
		return (-1);

	if (n <= 1)
		return (n);

	return (brute_force_sqrt(n, 2));
}

/**
 * brute_force_sqrt - Calculates the sqrt root of n based on Newton's rule
 * @n: Num to calculate the sqrt root
 * @factor: Factor to be tested as sqrt root
 *
 * Return: Natural sqrt root of n
 */
int brute_force_sqrt(int n, int factor)
{
	if (factor * factor < n)
		return (brute_force_sqrt(n, factor + 1));

	if (factor * factor == n)
		return (factor);

	return (-1);
}

/**
 * newton_sqrt - Calculates the sqrt root of n based on Newton's rule
 * @n: Num to calculate the sqrt root
 * @x: Guess of sqrt root
 *
 * Return: Natural sqrt root of n
 */
int newton_sqrt(int n, int x)
{
	/*
	 * This method needs to handle overflow, that's why the cast is needed
	 */
	unsigned long root = (x + (n / x)) / 2;

	if (root * root > (unsigned long)n)
		return (newton_sqrt(n, root));

	if (root * root == (unsigned long)n)
		return ((int)root);

	/*
	 * If the root^2 is less than n means that n
	 * doesn't have natural square root
	 */
	return (-1);
}
