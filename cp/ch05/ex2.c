/* ex2.c -- 打印输入值到其大于十的所有值输出
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define MAX 10

int main()
{
	int start, counter;
	counter = 0;
	printf("请输入一个起始值：");
	scanf("%d", &start);
	while ( counter++ <= MAX)
	{
		/* start++; */
		printf("%-10d%d\n", counter, start);
		++start;
	}
	return 0;
}
