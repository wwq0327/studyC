/* test14.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int k;
	for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), 
		     k*k <26; k+=2, printf("Now k is %d\n", k))
		printf("k is %d in the loop\n", k);

	return 0;
}
