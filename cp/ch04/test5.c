/* test5.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define BOOK "War and Peace"

int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\nThis is %.0f%% of list.\n",
	       BOOK, cost, percent);

	return 0;
}
