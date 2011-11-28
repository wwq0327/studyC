/* cypher2.c -- 改变输入，只保留其中的空格
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;

//	ch = getchar();
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch);
		else
			putchar(ch + 1);

//		ch = getchar();
	}
	putchar(ch);

	return 0;
}
