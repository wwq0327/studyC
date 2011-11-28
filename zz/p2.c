#include <stdio.h>
/* p2.c
 *
 * date: 2011-11-16
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

int main()
{
	char *pc = "hello";
	for(int i = 0; i <= 5; i++)
		printf("%c\n", *(pc++));

	return 0;
}
