/* ex1.c -- 将分钟表示的时间转换成小时和分钟的时间
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define MIN_PER_HOUR 60

int main()
{
	int min, hour, left;
	printf("Enter the number of minutes(<=0 quit): ");
	scanf("%d", &min);
	while (min > 0)
	{
		hour = min / MIN_PER_HOUR;
		left = min % MIN_PER_HOUR;
		printf("%d minutes is %d hours and %d minutes.\n", min, hour, left);

		/* 此段代码重复呀 */
		printf("Enter the number of minutes(<=0 quit): ");
		scanf("%d", &min);
	}
	printf("Done!\n");

	return 0;
}
