/* test7.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	unsigned long a = 5;
	int b = 50;
	float c = 1258754.235;
	float d = 232.456;
	char e[] = "hello, world,haha";

	printf("%15lu\n", a);
	printf("*%#x*\n", b);
	printf("*%-10.2E*\n", c);
	printf("%+10.3f\n", d);
	printf("%.8s\n", e);

	return 0;
}
