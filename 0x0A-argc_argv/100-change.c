#include <stdio.h>
#include <stdlib.h>

int min_coins_change(int, int[]);
int min_coins_changerec(int, int[], int);

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
 * @index: Current index of coin
 *
 * Return: Minimum value of coin change
 */
int min_coins_changerec(int n, int coins[], int index)
{
	int div_coins = n / coins[index];
	int residual = n % coins[index];

	if (n <= 0)
		return (0);

	if (div_coins > 0)
		return (div_coins + min_coins_changerec(residual, coins, index + 1));

	return (min_coins_changerec(n, coins, index + 1));
}
