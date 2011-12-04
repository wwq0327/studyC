/* t1.c
 *
 * date: 2011-11-30
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int *p;
	int num = 9;
	p = &num;
	printf("%d 的地址是： %p \n也可为 *p = %d\n", num, p, *p);

	return 0;
}
