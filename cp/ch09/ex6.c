/* ex6.c
 *
 * date: 2011-11-30
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int  is_word(int);

int main()
{
	int index;
	char ch;

	while ((ch = getchar()) != EOF)
	{
		index = is_word(ch);
		if (index)
			printf("%d ", index);
		else
			printf("-1 ");
	}

	return 0;
}

int is_word(int ch)
{
	if (isalpha(tolower(ch)))
		return ch - 'a' + 1;
	else
		return -1;
}
