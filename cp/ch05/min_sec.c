/* min_sec.c -- 把秒转换成分钟和秒
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define SEC_PER_MIN 60

int main()
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
        printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);
	while (sec>0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min,
		       left);
        printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}
