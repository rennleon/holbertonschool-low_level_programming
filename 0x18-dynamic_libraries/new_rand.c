int rand(void);

static int ind = 0;
int rand(void)
{
	ind++;

	if (ind == 1)
		return 8;
	if (ind == 2)
		return 8;
	if (ind == 3)
		return 7;
	if (ind == 4)
		return 9;
	if (ind == 5)
		return 23;
	if (ind == 6)
		return 74;

	return (77 + ind++);
}
