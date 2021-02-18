#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int min(int, int);
int get_length(char *);
int add_missing_digits(char *, char *, int, int, int *);

/**
 * infinite_add - Adds to numbers given as strings
 * @n1: First number to add
 * @n2: Second number to add
 * @r: buffer to store the sum
 * @size_r: size of the biffer
 *
 * Return: Pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int n1_len, n2_len, min_len;
	int i_n1, i_n2;
	int i_sum;
	int partial_sum;
	char *rev_sum;

	n1_len = get_length(n1);
	n2_len = get_length(n2);

	if (n1_len >= size_r || n2_len >= size_r)
		return (0);

	min_len = min(n1_len, n2_len);
	i_n1 = n1_len - 1;
	i_n2 = n2_len - 1;

	i_sum = 0;
	partial_sum = 0;
	rev_sum = malloc(size_r * sizeof(char));

	for (i = 0; i < min_len; i++)
	{
		partial_sum += n1[i_n1--] - '0';
		partial_sum += n2[i_n2--] - '0';
		rev_sum[i_sum++] = '0' + (partial_sum % 10);
		partial_sum /= 10;
	}

	i_sum = add_missing_digits(rev_sum, n1, i_sum, i_n1, &partial_sum);
	i_sum = add_missing_digits(rev_sum, n2, i_sum, i_n2, &partial_sum);

	if (partial_sum > 0)
		rev_sum[i_sum++] = '1';

	if (i_sum >= size_r)
		return (0);

	for (i = 0; i < size_r && i_sum >= 1; i++)
		r[i] = rev_sum[--i_sum];

	r[i] = '\0';

	return (r);
}

/**
 * min - Compares to numbers and returns the minimum
 * @n1: First num
 * @n2: Second num
 *
 * Return: Minimum between n1 and n2
 */
int min(int n1, int n2)
{
	if (n1 < n2)
		return (n1);

	return (n2);
}


/**
 * get_length - Calculates and returns the length of a string
 * @num: Number in string format
 *
 * Return: Length of num
 */
int get_length(char *num)
{
	int len = 0;

	while (*(num + len) != '\0')
		len++;

	return (len);
}

/**
 * add_missing_digits - Adds the remaining digits from num to rev_sum
 * @rev_sum: Sum of digits in reverse in string format
 * @n: Num to get the digits from
 * @i_sum: Index of rev_sum to put the  digit
 * @i: Index of "n" to be evaluated
 * @part_sum: Pointer to partial sum to calculate de digit to be appended
 *
 * Return: Next index of rev_sum to put the next digit
 */
int add_missing_digits(char *rev_sum, char *n, int i_sum, int i, int *part_sum)
{
	while (i >= 0)
	{
		*(part_sum) = *(part_sum) + n[i--] - '0';
		rev_sum[i_sum++] = '0' + (*(part_sum) % 10);
		*(part_sum) = *(part_sum) / 10;
	}

	return (i_sum);
}
