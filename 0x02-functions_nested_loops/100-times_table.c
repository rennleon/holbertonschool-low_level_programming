#include "holberton.h"
/**
 * print_times_table - Prints the mult taable from 0 to 9
 * @n: Limit number table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int res;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (res < 10)
				print_one_digit(res, j);
			else if (res < 100)
				print_two_digits(res);
			else
				print_three_digits(res);

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_one_digit - Print one formatted digit
 * @res: number to be printed
 * @j: number to evaluated if spaces are required
 */
void print_one_digit(int res, int j)
{
	if (j > 0)
	{
		_putchar(' ');
		_putchar(' ');
	}

	_putchar('0' + res);

}

/**
 * print_two_digits - Print two formatted digits
 * @res: number to be printed
 */
void print_two_digits(int res)
{
	_putchar(' ');
	_putchar('0' + (res / 10));
	_putchar('0' + (res % 10));
}

/**
 * print_three_digits - Print three formatted digits
 * @res: number to be printed
 */
void print_three_digits(int res)
{
	_putchar('0' + (res / 100));
	_putchar('0' + ((res % 100) / 10));
	_putchar('0' + (res % 10));
}
