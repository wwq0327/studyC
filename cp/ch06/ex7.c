/* ex7.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	float f_a, f_b, f_result;
	printf("请输入两个浮点数：(q quit)");

	while (scanf("%f%f", &f_a, &f_b) == 2)
	{
		f_result = (f_a - f_b) / (f_a * f_b);

		printf("(%g - %g) / (%g * %g) = %g\n",
		       f_a, f_b, f_a, f_b, f_result);
	}

	printf("\n");
	return 0;
}
