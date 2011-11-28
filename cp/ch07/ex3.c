/* ex3.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int n;
	double sumeven = 0.0;
	int ct_even = 0;  // 偶数个数
	double sumodd = 0.0;
	int ct_odd = 0;   // 奇数个数

	while (scanf("%d", &n) == 1 && n != 0)
	{
		if (n % 2 == 1)
		{
			sumodd +=n;
			++ct_odd;
		}
		else
		{
			sumeven += n;
			++ct_even;
		}
	}

	printf("Number of evens: %d", ct_even);
	if (ct_even > 0)
		printf(" average: %g", sumeven / ct_even);
	putchar('\n');

	printf("Number of odds: %d", ct_odd);
	if (ct_odd > 0)
		printf(" average: %g", sumodd / ct_odd);
	putchar('\n');
	printf("\nDone!\n");

	return 0;
}
