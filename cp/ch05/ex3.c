/* ex3.c -- 把输入的天数转换成周数和天数
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define WEEKLY 7

int main()
{
	int days, weeks, left;
	printf("请输入天数(<=0 退出): ");
	scanf("%d", &days);
	while ( days > 0)
	{
		weeks = days / WEEKLY;
		left = days % WEEKLY;
		printf("%d 天含 %d 周 %d天.\n", days, weeks, left);

		printf("请输入天数(<=0 退出): ");
		scanf("%d", &days);
	}
	printf("Done!\n");

	return 0;
}
