/* ex10.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define SIZE 8

int main()
{
	int num[SIZE];
	int index;
	printf("请输入8个整数: \n");
	for (index = 0; index < SIZE; index++)
		scanf("%d", &num[index]);
	printf("下面是你所输入数的倒序结果:\n");

	for (index = SIZE-1; index >= 0; index--)
		printf("%d ", num[index]);

	printf("\n");

	return 0;
}
