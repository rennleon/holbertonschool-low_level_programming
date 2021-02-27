#include <stdio.h>
#include <stdlib.h>

int min_coins_change(int, int[]);
int min_coins_changerec(int, int[], int, int, int);

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings that are the actual arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num <= 0)
		printf("0\n");
	else
		printf("%d\n", min_coins_change(num, coins));

	return (0);
}

/**
 * min_coins_change - Calculates the minimum number of coins to give a change
 * @num: Number to change into coins
 * @coins: Array of number with coin values
 *
 * Return: Minimum value of coin change
 */
int min_coins_change(int num, int coins[])
{
	int index = 0;
	int div_coins = 0;
	int coins_count = 0;

	while (num > 0)
	{
		div_coins = num / coins[index];

		if (div_coins > 0)
		{
			coins_count += div_coins;
			num = num % coins[index];
		}

		index++;
	}

	return (coins_count);
}

/**
 * min_coins_changerec - Calculates the minimum number of coins to give change
 * @n: Number to change into coins
 * @coins: Array of number with coin values
 * @coins_len: Length of the coins array
 * @index: Index of the current coin that is been evaluated
 * @sum: Sum of the coin values that the function is considering as solution
 *
 * Return: Minimum value of coin change
 */
int min_coins_changerec(int n, int coins[], int coins_len, int index, int sum)
{
	int curr_sum = sum + coins[index];

	if (index >= coins_len)
		return (0);

	if (curr_sum < n)
		return (1 + min_coins_changerec(n, coins, coins_len, index, curr_sum));

	if (curr_sum > n)
		return (min_coins_changerec(n, coins, coins_len, index + 1, sum));

	/* curr_sum == num */
	return (1);
}
