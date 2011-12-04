/* st1.c
 *
 * date: 2011-11-24
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>



int main()
{
	struct complex_struct { double x, y; } z;
	double x = 3.0;
	z.x = x;
	z.y = 4.0;

	if (z.y < 0)
		printf("z=%f%fi\n", z.x, z.y);
	else
		printf("z=%f+%fi\n", z.x, z.y);
	return 0;
}
