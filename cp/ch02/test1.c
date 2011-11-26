/* test1.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int a, b;
	b = 2;
	a = 5;
	b = a;
	a = b;
	printf("%d %d\n", b, a);

	return 0;
}
