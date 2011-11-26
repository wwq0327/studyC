/* ex5.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <string.h>

int main()
{
	char fname[40];
	char lname[40];

	int f_width, l_width;

	printf("Please enter you first name: ");
	scanf("%s", fname);
	printf("Please enter you last name: ");
	scanf("%s", lname);

	f_width = strlen(fname);
	l_width = strlen(lname);

        /* 右对齐 */
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", f_width, f_width, l_width, l_width);
	printf("\n");

        /* 左对齐 */
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", f_width, f_width, l_width, l_width);
	return 0;
}
