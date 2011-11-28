/* test6.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int i = 0;
	while (i < 3) {
		switch (i++) {
		case 0: printf("fat");
		case 1: printf("hat");
		case 2: printf("cat");
		default: printf("Oh no! ");
		}
		putchar('\n');
	}

	return 0;
}
