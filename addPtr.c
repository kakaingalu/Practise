#include <stdio.h>
int addPtr(int a, int b);
/**
 * main - adds numbers using pointers
 *
 * Return: 0.
 */
int addPtr(int a, int b)
{
	int *ptr1;
	int *ptr2;
	
	ptr1 = &a;
	ptr2 = &b;

	return (*ptr1 + *ptr2);
}

int main()
{
	int n;
	
	n = addPtr(3,2);
	printf("%d\n", n);
	return (0);
}
