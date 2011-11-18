#include <stdio.h>
/* p1.c

 * date: 2011-11-18
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

int main()
{
	int x = 1;
	int *p;

	printf("x的值为: %d\n", x);
	p = &x;
	printf("*p的值为： %d\n", *p);
	*p = 0;
	printf("x的值为: %d\n", x);
	printf("x + 10 : %d\n", *p+10);

	return 0;
}
