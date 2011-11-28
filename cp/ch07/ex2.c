/* ex2.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main()
{
	char c;
	long n_chars = 0;

	printf("请输入一串字符串，我将打印出他们对应的ASCII码：\n");

	while ((c = getchar()) != STOP)
	{
		n_chars++;
		printf("\"%c\" = %-5d", c, c);

		if (n_chars % 8 == 0)
			printf("\n");
		/* printf("\n"); */

	}
	printf("\n");
	return 0;
}
