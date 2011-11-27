/* test7.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char a = 'a';
	char g = 'g';

	while (++a < g)
		printf("%c\n", a);
 
	return 0;
}
