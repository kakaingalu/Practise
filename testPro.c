#include<stdio.h>
int addArray(void);
/**
 * addArray - add numbers in array.
 * @arr - array to use in addition
 * Return: 0
 */
int addArray(void)
{
	int i, sum = 0, n; 

	int arr[10];	

	printf("Enter to digits number to add\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Please enter the numbers to add\n");
		scanf("%d", &arr[n]);
		sum = sum + arr[n];
	}
		printf("the sum will be: %d\n", sum);

	return (sum);
}

/**
 * main - checks code and prints output
 *
 * Return: 0.
 */
int main(void)
{
	addArray();
	return (0);
}

