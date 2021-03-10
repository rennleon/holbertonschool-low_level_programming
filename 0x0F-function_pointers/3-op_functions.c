#include "3-calc.h"

/**
 * op_add - Add two numbers
 * @a: First num
 * @b: Secong num
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts two numbers
 * @a: First num
 * @b: Second num
 *
 * Return: Substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First num
 * @b: Ssecond num
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First num
 * @b: Second num
 *
 * Return: Ddivision of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the division remainder of two numbers
 * @a: Fisrt num
 * @b: Second num
 *
 * Return: Remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
