/* swap.c
 *
 * date: 2011-11-30
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int max(int, int, int);

int main()
{
	printf("最大数为: %d\n", max(-30, 5, 1));

	return 0;
}

int max(int a, int b, int c)
{
	int tmp_a, tmp_b;
	tmp_a = a > b ? a: b;
	tmp_b = tmp_a > c ? tmp_a: c;

	return tmp_b;
}
