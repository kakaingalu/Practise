#include <stdio.h>
#include <string.h>

#define SIZE 40
/**
 * AddString - adds string without concat()
 *
 * return: 0
 */
int main()
{
	char str[SIZE] = "string";
	char str1[SIZE] = " hello";
	char str2[SIZE] = "wewe";	


	strcat(str, str1);
	strncat(str2, str1, 7);
	
	printf("%s\n%s\n", str, str2);
	return (0);
}
