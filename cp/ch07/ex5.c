/* ex5.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char ch;
	int ct1 = 0;
	int ct2 = 0;

	while ((ch = getchar()) != '#')
	{
		switch(ch)
		{
		case '.': 
			putchar('!');
			++ct1;
			break;
		case '!':
			putchar('!');
			putchar('!');
			++ct2;
			break;
		default:
			putchar(ch);
		}
	}
	putchar('\n');

	printf("%d replacements of . with !\n", ct1);
	printf("%d replacements of ! with !!\n", ct2);


	return 0;
}
