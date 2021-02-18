/**
 * _strcat - Appends src to dest and returns a pointer to dest
 * @dest: String to be extended
 * @src: String to be appended to dest
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int offset = 0;
	char *start = dest;

	while (*(start + offset) != '\0')
		offset++;

	while (*(src) != '\0')
	{
		*(start + offset) = *(src);
		offset++, src++;
	}

	*(start + offset) = '\0';

	return (dest);
}
