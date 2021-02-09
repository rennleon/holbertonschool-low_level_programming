#include "holberton.h"
/**
 * times_table - Prints the mult taable from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (res < 10)
			{
				if(j > 0)
					_putchar(' ');

				_putchar('0' + res);
			}
			else
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
