/* ex11.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <math.h>

int main()
{
	int t_ct;
	double time, x;
	int limit;
	printf("输入下步数： ");
	scanf("%d", &limit);
	for (time=0, x=1, t_ct=1; t_ct <= limit; t_ct++, x += 1)
	{
		if (t_ct % 2 == 0) time += 1.0/x*(-1.0);
		else time += 1.0/x;

		printf("当 %d 次求和时，值为 %f.\n", t_ct, time);
	}
 
	return 0;
}
