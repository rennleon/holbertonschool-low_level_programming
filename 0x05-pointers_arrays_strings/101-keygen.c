#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void substract_key(char key[], int len, int checksum);

/**
 * main - Generates a random password
 *
 * Return: Always 0.
 */
int main(void)
{
	/* 2772 */
	char c;
	char key[60];
	int i;
	int r_val;
	int checksum;

	srand ( time(NULL) );

	i = 0;
	r_val = rand();
	checksum = 0;

	while (checksum < 2772)
	{
		c = '0' + (r_val % 10);
		checksum += c;
		r_val /= 10;
		key[i++] = c;

		if (r_val == 0)
			r_val = rand();
	}

	key[i++] = '\0';

	substract_key(key, i, checksum);

	printf("%s\n", key);

	return (0);
}

/**
 * substract_key - Rests one to each char of string
 * @key: key to be printed as output
 * @len: length of key
 * @checksum: Sum of all the ascii codes in key
 *
 */
void substract_key(char key[], int len, int checksum)
{
	int i;
	char c;

	for (i = 0; i < len && checksum != 2772; i++)
	{
		c = key[i] - 1;
		if (c >= '0' && c <= '9')
		{
			key[i] = c;
			checksum--;
		}
	}
}
