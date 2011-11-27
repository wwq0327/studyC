/* test9_c.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char ch = 's';

	while (ch < 'w')
	{
		printf("%c\n", ch);
		ch++;
	}
	printf("%c\n", ch);
	return 0;
}
