/* ex1.c
 *
 * date: 2011-11-29
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int count = 0;
	/* char ch; */

	while ( getchar() != EOF)
	{
		++count;
	}

	printf("%d\n", count);
	return 0;
}
