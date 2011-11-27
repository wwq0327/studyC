/* test8_b.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	while (ch != 'g')
	{
		printf("%c", ++ch);
		/* printf("%c", --ch); */

		scanf("%c", &ch);
	}

	return 0;
}
