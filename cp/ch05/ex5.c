/* ex5.c -- 打印从1到所输入的数的和
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int counter = 0;
	int sum = 0;
	int end_num;
	printf("请输入所加的最未尾数: ");
	scanf("%d", &end_num);
	while (counter++ < end_num)
		sum = sum + counter;

	printf("%d\n", sum);

	return 0;
}
