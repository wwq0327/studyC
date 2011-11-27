/* test8_d.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char ch;

	scanf("%c", &ch);
	for (ch = '$'; ch != 'g'; scanf("%c", &ch))
		putchar(ch);

	return 0;
}
