/* ex1.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char list[26];
	char ch = 'a';
	int i;
	for (i = 0; i < 26; i++)
	{
		list[i] = ch + i;
	}

	for (i = 0; i < 26; i++)
		printf("%c ", list[i]);

	printf("\n");

	return 0;
}
