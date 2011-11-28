/* ex5.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int start_num;
	int end_num;
	long num;
	int i;

	printf("请输入要计算数的起始与结尾的数：(请确保起始数小于结尾数)\n");
	scanf("%d%d", &start_num, &end_num);
	printf("\n==========\n");
	for (i = 0; i <= end_num - start_num; i++)
	{
		num = start_num + i;

		printf("%2d%10ld%10ld\n", num , num*num, num*num*num);
	}
	printf("==========\n");

	return 0;
}
