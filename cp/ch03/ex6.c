/* ex6.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	float water;
	int one_k = 950;
	float one_f = 3.0e-23;
	printf("请输入水的夸脱数：");
	scanf("%f", &water);
	printf("水分子个数为： %e .\n", water * one_k /one_f);

	return 0;
}
