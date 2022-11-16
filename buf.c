#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buf = NULL;
	size_t n = 0;

	printf("Jose type kitu\n");

	getline(&buf, &n, stdin);


	printf("Kitu ni: %s\n na size ni %d\n", buf,n);
	free(buf);
	return (0);
}
