/* ex3.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char let = 'Z';
	char end;
	char start;

	for (end = let; end >= 'A'; end--)
	{
		for (start = let; start >= end; start --)
			printf("%c", start);
		printf("\n");
	}

	return 0;
}
