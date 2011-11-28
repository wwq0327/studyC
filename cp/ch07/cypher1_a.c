/* cypher1_a.c -- 改变输入，只保留其中的空格
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define SPACE ' '

int main()
{
	char ch;

//	ch = getchar();
	while ((ch = getchar()) != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);

//		ch = getchar();
	}
	putchar(ch);

	return 0;
}
