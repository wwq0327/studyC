/* ps.c
 *
 * date: 2011-11-24
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include "apue.h"

int main()
{
	printf("Hello world from process ID %d\n", getpid());
	exit(0);
}
