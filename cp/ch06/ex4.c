/* ex4.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char start = 'A';
	char end = 'G';
	int i, n, f;
	for ( f = start; f <= end; f++)
	{ 
	for (i = 0; i <= end-start; i++)
		printf("%c", start+i);

	for (n = end; n > start; n--)
		printf("%c", n-1);

	printf("\n");
	}
	return 0;t
}
