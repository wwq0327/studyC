#include <stdio.h>
/* p2.c

 * date: 2011-11-18
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

int swap_v1(int *, int *);
int swap_v2(int *, int *);

int main()
{
	int a = 6;
	int b = 10;

	//swap_v1(&a, &b);
	//printf("swap_v1: a: %d, b: %d\n", a, b);

	swap_v2(&a, &b);
	printf("swap_v2, 还原a，b的值： a: %d, b: %d\n", a, b);

	return 0;
}

/* 有效 */
int swap_v1(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

/* 无效，为什么 ？ */
int swap_v2(int *px, int *py)
{
	int *temp;
	temp = px;
	px = py;
	py = temp;
}
