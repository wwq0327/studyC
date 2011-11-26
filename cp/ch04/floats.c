/* floats.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	const double RENT = 3852.99;
	printf("*%10.3f*\n", RENT);
	printf("*%-10.3f*\n", RENT);

	return 0;
}
