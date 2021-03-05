#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int arg_is_number(char *, int *);
int is_number(char);
void print_result(char *, int);
void mult_nums(char *, int *, int, int, int);

/**
 * main- Entry point
 * @argc: Number of args passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: 0 in success, exit with 98 on error
 */
int main(int argc, char **argv)
{
	char *n1, *n2;
	char *res;
	int len_n1, len_n2;
	int r_max_len, ires, ires_main, rdigit;
	int asign_res_ind;
	int in1, in2, d1, d2;
	int p_mult, p_sum;

	if (argc != 3 ||
			!arg_is_number(argv[1], &len_n1) ||
			!arg_is_number(argv[2], &len_n2))
	{
		printf("Error\n");
		exit(98);
	}

	n1 = argv[1];
	n2 = argv[2];

	r_max_len = len_n1 + len_n2;

	res = malloc(r_max_len + 1);

	if (res == NULL)
		exit(98);

	res[r_max_len] = '\0';
	asign_res_ind = r_max_len;
	ires_main = r_max_len - 1;

	for (in2 = len_n2 - 1; in2 >= 0; in2--)
	{
		p_sum = 0;
		ires = ires_main;
		d2 = n2[in2] - '0';

		for (in1 = len_n1 - 1; in1 >= 0; in1--)
		{
			d1 = n1[in1] - '0';

			p_mult = d2 * d1;
			p_sum += p_mult;

			/* index in res already contains a digit */
			if (ires >= asign_res_ind)
			{
				rdigit = res[ires] - '0';
				p_sum += rdigit;
			}

			res[ires--] = (p_sum % 10) + '0';
			p_sum /= 10;
		}

		if (p_sum > 0)
			res[ires--] = p_sum + '0';

		ires_main--;
		/* Last position that a digit was asigned in res */
		asign_res_ind = ires + 1;
	}

	/*printf("%s\n", &res[asign_res_ind]);*/
	print_result(res, asign_res_ind);
	free(res);

	return (0);
}

/**
 * arg_is_number - Calculates the length of a number and stores it in n
 * @s: String which length will be calculated
 * @n: Pointer which will store the length of s
 *
 * Return: 1 if all chars arre numbers, 0 otherwise
 */
int arg_is_number(char *s, int *n)
{
	int len = 0;

	while (s[len] != '\0')
		if (is_number(s[len]))
			len++;
		else
			return (0);

	*n = len;

	return (1);
}

/**
 * is_number - Evaluates if a char is a number
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a number, 0 otherwise
 */
int is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * print_result - Prints the resulting product stored as individual chars
 * @res: String to be printed
 * @pos: Position from which to start print the digits
 */
void print_result(char *res, int pos)
{
	int is_left_zero = 1;

	while (res[pos] != '\0')
	{
		if (res[pos] != '0' && is_left_zero == 1)
			is_left_zero = 0;

		if (!is_left_zero)
			_putchar(res[pos]);
		pos++;
	}
	_putchar('\n');
}
