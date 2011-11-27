/* add_one.c -- 增量： 前缀与后缀
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int ultra = 0, super = 0;
	while(super < 5)
	{
		super++;
		ultra++;
		printf("super = %d, ultra = %d\n", super, ultra);
	}

	return 0;
}
