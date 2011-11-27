/* wheat.c -- 指数增长
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define SQUARES 64   /* 棋盘上的方格数 */
#define CROP    1E15 /* 以粒计的美国小麦产量 */

int main()
{
	double current, total;
	int count = 1;

	printf("square grains total  ");
	printf("fraciont of \n");
	printf("    added    grain    ");
	printf("USA total\n");
	total = current = 1.0; /* 开始时是1粒 */
	printf("%4d %13.2e % 12.2e %12.2e\n", count, current,
	       total, total/CROP);

	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
		       total, total/CROP);
	}

	printf("That's all.\n");

	return 0;
}
