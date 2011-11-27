/* addemup.c 
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define MAX 100

int main()
{
	int count, sum;
	count = 0;
	sum = 0;
	while (count++ < MAX)
	{
		sum = sum + count;
		printf("%-10d sum = %d\n", count, sum);
	}

	return 0;
}
