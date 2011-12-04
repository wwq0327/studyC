/* s1.c
 *
 * date: 2011-11-30
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int arr[10];
	int s;
	s = (arr == &arr[0]);
	printf("%p  %p\n", arr, &arr[0]);
	printf("%d\n", s);

	return 0;
}
