/* ex12.c
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
	int start = 2;
	int sum = 0;

	/* printf("请输入一个整数: \n"); */
	/* scanf("%d", &start); */

	for (index = 0, sum=start; index < SIZE; index++)
	{
		num[index] = sum;
		sum *= 2;
	}
	
	index = 0;
	do
	{
		printf("%d ", num[index]);
		index++;
	}while (index < SIZE);
	printf("\n");
	return 0;
}
