/* for_char.c
 *
 * date: 2011-11-27
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char ch;
	int counter = 0;
	for (ch = 'A'; ch <= 'z'; ch++)
	{
		printf("%c = %-5d", ch, ch);
		++counter;
		if (counter % 10 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
