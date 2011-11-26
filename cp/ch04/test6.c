/* test6.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int b = 8;
	float c = 232.346;
	float d = 2.33e+002;
	char e[40] = "wyatt";

	printf("*%#4X*\n", b); 
	printf("*%10.3f*\n", c);
	printf("*%12e*\n", d);
	printf("*%-30s*\n", e);

	return 0;
}
