/* ex4.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char start = 'A';
	char end = 'E';
	int i, n;

	for (i = 0; i <= end-start; i++)
	{
		printf("%c", start+i);
		for (n = 0; n <= i; n++)
			printf("%c", end - n);
		printf("\n");
	}
	printf("\n");
	return 0;
}
