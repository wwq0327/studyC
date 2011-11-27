/* test12.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

long func(int);

int main()
{
	int num = 10;
	printf("%ld\n", func(num));

	return 0;
}

long func(int num)
{
	return (long)(num * num);
}
