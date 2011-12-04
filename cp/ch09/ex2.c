/* ex2.c
 *
 * date: 2011-11-30
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
void chline(char, int, int);

int main()
{
	chline('#', 5, 20);

	return 0;
}

void chline(char ch, int i, int j)
{
	int m, n;
	for (m = 0; m < i; m++)
	{
		for (n = 0; n < j; n++)
			putchar(ch);
		putchar('\n');
	}
	putchar('\n');
}
