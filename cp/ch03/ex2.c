/* ex2.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int c_value;
	printf("Enter a ASCII value:");
	printf("_____\b\b\b\b");
	scanf("%d", &c_value);
	printf("该值的对应字符为: %c \n", c_value);

	return 0;
}
