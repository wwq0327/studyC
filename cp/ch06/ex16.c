/* ex16.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

#define INIT 100.0
#define RATE 0.08
#define GET  10.0

int main()
{
	double delta = INIT;
	int years = 0;
	while (delta > 0)
	{
		delta = (delta - GET) * (1.0 + RATE);
		++years;
		printf("#%-2d YEAR, 剩下： %-10.2lf\n", years, delta);
	}
	printf("他需要 %d 年才能提光所有的钱.\n", years);

	return 0;
}
