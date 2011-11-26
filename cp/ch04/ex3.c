/* ex3.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	float num;
	printf("Please enter a float num: ");
	scanf("%f", &num);

	printf("The input is %.1f or %e\n", num, num);
	printf("The input is %+.3f or %.3E\n", num, num);

	/* printf("%.3E\n", 2356.222); */

	return 0;
}
