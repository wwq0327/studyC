/* pp1.c
 *
 * date: 2011-11-21
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int *pint;
	char *pchar;
	float *pf;
	double *pd;

	int tint;
	char tc;
	float tf;
	long double tld;

	printf("指针类型所点用内存大小：\n");
	printf("int: %d\n", sizeof(pint));
	printf("char: %d\n", sizeof(pchar));
	printf("float: %d\n", sizeof(pf));
	printf("duble: %d\n", sizeof(pd));

	printf("普通数据类型所占内在大小：\n");
	printf("int: %d\n", sizeof(tint));
	printf("char: %d\n", sizeof(tc));
	printf("float: %d\n", sizeof(tf));
	printf("long double: %d\n", sizeof(tld));

	return 0;
}
