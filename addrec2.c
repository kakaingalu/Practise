#include <stdio.h>

/**
 * addrec - adds numbers using recursion
 *
 * Return: 0.
 */
int addRec(int a, int b)
{
	int sum = 0;

	if (a == 0 || b == 0)
		return (a);

	sum = addRec(a, b - 1) + 1;
	

	return (sum);
}

int main()
{
	int n;
	n = addRec(3,2);
	printf("%d\n", n);
	return (0);
}
