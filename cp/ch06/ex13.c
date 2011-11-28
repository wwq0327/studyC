/* ex13.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define SIZE 8

int main()
{
	double arr[SIZE];
	double arr_cumul[SIZE];
	int i;

	printf("请输入 %d 个数\n", SIZE);

	for (i = 0; i < SIZE; i++)
	{
		printf("value #%d: ", i + 1);
		scanf("%lf", &arr[i]);
	}

	arr_cumul[0] = arr[0]; /* 设置第一个元素值 */
	for (i = 1; i < SIZE; i++)
		arr_cumul[i] = arr_cumul[i-1] + arr[i]; /* 将第二个数组的值设置成其前一个数再加上对应的arr数组中的元素 */

	/* 打印出两个数组的值 */
	for (i = 0; i < SIZE; i++)
		printf("%8g ", arr[i]);
	printf("\n");

	for (i = 0; i < SIZE; i++)
		printf("%8g ", arr_cumul[i]);

	printf("\n");
	return 0;
}
