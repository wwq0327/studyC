/* zeno.c -- 序列的和
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int t_ct;
	double time, x;
	int limit;

	printf("Enter the number of terms you want: ");
	scanf("%d", &limit);
	for (time=0, x=1, t_ct=1; t_ct <= limit; t_ct++, x *= 2.0)
	{
		time += 1.0/x;
		printf("time = %f when terms = %d.\n", time, t_ct);
	}

	return 0;
}
