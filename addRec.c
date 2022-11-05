#include<stdio.h>
int addSum(int a);
/**
 * main - add digits using recursion
 *
 * Return: 0
 */
int addSum(int a)
{
	int sum = 0;
	if (a == 0)
		return (0);	
	
	sum = a % 10 + addSum(a / 10);		
	return (sum);
	
}

int main()
{
	int n;
	
	n = addSum(23);
	printf("sum: %d\n", n);
	return (0);
}
