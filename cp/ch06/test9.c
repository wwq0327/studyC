/* test9.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int m, n;
	n = 30;
	for (n = 2, m = 6; n < m; n *=2, m += 2)
		printf("%d %d\n", n, m);

	return 0;
}
