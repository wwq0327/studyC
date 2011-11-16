#include <stdio.h>
/* z2.c

 * date: 2011-11-16
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

void swap1(int x, int y);
void swap2(int *, int *);

int main()
{
	int a = 10;
	int b = 5;
	printf("使用数据方式交换数据\n");
	printf("原来： a: %d, b: %d\n", a, b);
	swap1(a, b);

	printf("交换后的值为：a: %d, b: %d\n", a, b);

	printf("使用指针方式交换\n");
	swap2(&a, &b);
	printf("交换后的值： a： %d, b: %d\n", a, b);

	return 0;
}

void swap1(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void swap2(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
