/* test9_b.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int x = 100;
	while (++x < 103)
		printf("%4d\n", x);
	printf("%4d\n", x);

	return 0;
}
