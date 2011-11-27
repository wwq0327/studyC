/* test7_a.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int i = 0;
	while (++i < 4)
		printf("Hi! ");
do
	printf("Bye! ");
while (i++ < 8);


	return 0;
}
