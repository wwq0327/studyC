/* ex4.c -- 求谐均值
 *
 * date: 2011-11-30
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

double value(double, double);

int main()
{
	double a, b;

	printf("请输入两个浮点数 ( # 退出) :\n");
	while (scanf("%f%f", &a, &b) == 2)
	{
		printf("谐均值是： %.2f\n", value(a, b));
		printf("再次输入值进行计算或是退出程序:\n");
	}
	return 0;
}

double value(double a, double b)
{
	const double ONE = 1.0;
	return ONE / ((ONE / a + ONE / b) / 2);
}
