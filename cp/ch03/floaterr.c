/* floaterr.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f\n", a);

	return 0;
}
