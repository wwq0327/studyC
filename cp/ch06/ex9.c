/* ex9.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int lower, upper;
	int sum;
	int i;

	printf("请输入上下限整数（输入错误或上限等于或小于下限时，程序退出: ");
	while (scanf("%d%d", &lower, &upper) == 2 && lower < upper)
	{
		sum = 0;
		for (i = lower; i <= upper; i++)
			sum = sum + i * i;

		printf("The sums of the squares from %d to %d is %d\n", lower*lower, upper*upper, sum);
		printf("Enter next set of limits: ");
	}

	printf("Done!\n");

	return 0;
}
