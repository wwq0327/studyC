/* echo_eof.c
 *
 * date: 2011-11-29
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}
