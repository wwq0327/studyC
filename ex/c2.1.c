/* c2.1.c
 *
 * date: 2011-11-22
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	printf("singed char min = %d\n", -(char)((unsigned char) ~0 >> 1));
	printf("singed char max = %d\n", (char)((unsigned char) ~0 >> 1));

	return 0;
}
