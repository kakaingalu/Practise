#include <stdio.h>

/**
 * main - adds digits of number.
 *
 * Return: 0.
 */
int main(void)
{
	int n, sum = 0, i, value, rem;

	printf("Please enter of digits of the number of enter\n");
	scanf("%d", &n);
	printf("You will be entering a number with %d digits\n", n);
	printf("Please enter number with minimum of two digits to add\n");
	scanf("%d", &value);

	for (i = 0; value != 0; i++)
	{
	  rem = value % 10;
	  sum = sum + rem;
	  value = value / 10;
	}
	printf("sum will be: %d\n", sum);
	return (0);
}
