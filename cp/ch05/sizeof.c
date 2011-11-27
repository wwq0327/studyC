/* sizeof.c -- 使用sizeof运算符
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf("n = %d, n has %zd bytes: all ints have %zd bytes.\n",
	       n, sizeof n, intsize);

	return 0;
}
