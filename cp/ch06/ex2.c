/* ex2.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define CH "$"
#define ROWS 5

int main()
{
	int i, n;
	for (i = 0; i < ROWS; i++)
	{
		for (n = 0; n <= i; n++)
			printf("%s", CH);
		printf("\n");
	}

	return 0;
}
