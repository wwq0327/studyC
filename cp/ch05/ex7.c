/* ex7.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <string.h>

void print_f(float);

int main()
{
	float num;
	printf("请输入一个数，我将打印出它的三次方结果(请输入浮点数): ");
	scanf("%f", &num);
	print_f(num);

	return 0;
}

void print_f(float num)
{
	float f;
	f = num * num * num;
	printf("%f 的三次方是 %.4f\n", num, f);
}
