#include <stdio.h>

/**
 * main - Adds numbers entered by user
 *
 * Return: 0.
 */
int main(void)
{
	int n, value, c, sum = 0;
	
	printf("Please enter the number of times to add\n");
	scanf("%d", &n);

	printf("You have entered %d times\n", n);
	printf("Now enter numbers to add\n");
	for (c = 0; c < n; c++)
	{
		scanf("%d", &value);
		sum += value;
	}
	printf("The sum will be: %d\n", sum);
	return (0);
}

