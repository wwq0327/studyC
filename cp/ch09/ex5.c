/* ex5.c
 *
 * date: 2011-11-30
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
void larger_of(int *, int *);

int main()
{
	int x, y;
	x = 10;
	y = 9;
	printf("换前x = %d, y = %d\n", x, y);
	larger_of(&x, &y);
	printf("换后x = %d, y = %d\n", x, y);

	return 0;
}

void larger_of(int *x, int *y)
{
	int max;
	max = *x > *y ? *x: *y;
        
        /* 将指针x, y的值修改为最大值 */
	*x = *y = max;	
}
