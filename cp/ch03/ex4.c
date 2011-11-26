/* ex4.c -- 读入一个浮点数，并以小数和指数形式打印出来
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	float in_num;
	printf("请输入一个小数： ");
	scanf("%f", &in_num);
	printf("The input is is %f or %e .\n", in_num, in_num);

	return 0;
}
