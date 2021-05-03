#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void gen_first_half(char *str, char *password, char *username, int userlen);
void gen_second_half(char *str, char *password, char *username, int userlen);


/**
 * main - Generates a valid passwrod for crackme5
 * @argc: Number of args
 * @argv: Array of args
 *
 * Return: 0 on success, 1 on failure
*/
int main(int __attribute__((unused))argc, char **argv)
{
	char *str, *username, password[7];
	int userlen;

	str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	username = argv[1];
	userlen = strlen(username);
	password[6] = '\0';

	gen_first_half(str, password, username, userlen);
	gen_second_half(str, password, username, userlen);

	printf("%s", password);

	return (0);
}

/**
 * gen_first_half - Generates the first 3 chars for the password
 * @str: String containig chars to be taken from
 * @password: Arrays of chars to hold the password
 * @username: Arg as a string passed to the program
 * @userlen: Length of the username
*/
void gen_first_half(char *str, char *password, char *username, int userlen)
{
	int temp = 0, i;

	/* Pass first char */
	password[0] = str[(userlen ^ 0x3b) & 0x3f];

	/* Pass second char: username and userlen */
	for (i = 0; i < userlen; i++)
		temp += username[i];
	password[1] = str[(temp ^ 0x4f) & 0x3f];

	/* Pass third char: username and userlen */
	temp = 1;
	for (i = 0; i < userlen; i++)
		temp *= username[i];
	password[2] = str[(temp ^ 0x55) & 0x3f];
}

/**
 * gen_second_half - Generates the last 3 chars for the password
 * @str: String containig chars to be taken from
 * @password: Arrays of chars to hold the password
 * @username: Arg as a string passed to the program
 * @userlen: Length of the username
*/
void gen_second_half(char *str, char *password, char *username, int userlen)
{
	int temp = 0, i, c;

	/* Pass fourth char: username and userlen */
	temp = *username;
	for (i = 0; i < userlen; i++)
		if (temp < username[i])
			temp = username[i];
	srand(temp ^ 0xe);
	password[3] = str[rand() & 0x3f];

	/* Pass fifth char: username and userlen */
	temp = 0;
	for (i = 0; i < userlen; i++)
		temp += username[i] * username[i];
	password[4] = str[(temp ^ 0xef) & 0x3f];

	/* Pass sixth char: username and userlen */
	temp = 0;
	c = *username;
	for (i = 0; i < c; i++)
		temp = rand();
	password[5] = str[(temp ^ 0xe5) & 0x3f];
}
