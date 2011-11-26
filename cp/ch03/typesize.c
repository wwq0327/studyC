/* typesize.c -- 输出类型的大小
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{

	printf("int: %u bytes.\n", sizeof(int));
	printf("char: %u bytes.\n", sizeof(char));
	printf("long: %u bytes.\n", sizeof(long));
	printf("double: %u bytes.\n", sizeof(double));

	return 0;
}
