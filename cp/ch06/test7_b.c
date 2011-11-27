/* test7_b.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int i;
	char ch;

	for (i = 0, ch = 'A'; i < 4; i++, ch +=2 * i)
		printf("%c", ch);

	return 0;
}
