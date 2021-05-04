int rand(void);
const int arr[] = {8, 8, 7, 9, 34, 74};
static int ind = 0;
int rand(void)
{
	ind++;

	if (ind <= 6)
		return arr[ind - 1];

	return (77 + ind++);
}
