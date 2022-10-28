#include <stdio.h>

/**
 * main - adds numbers using array
 *
 * Return: 0.
 */
int main(void)
{
	int c, n, arr[100], sum = 0;

	printf("Please enter number of times to add\n");
	scanf("%d", &n);
	printf("You have entered: %d times\n", n);
	printf("Enter numbers to add\n");

	for (c = 0; c < n; c++)
	{
		scanf("%d", &arr[c]);
		sum += arr[c];
	}
	printf("The sum of entered number will be: %d\n", sum);
	return(0);
}

