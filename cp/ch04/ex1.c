/* ex1.c -- 输入名和字，然后打印出来
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	char first_name[20];
	char last_name[20];

	printf("Please enter your first name:");
	scanf("%s", first_name);
	printf("Please enter your last name:");
	scanf("%s", last_name);

	printf("Your full name is: %s, %s.\n", first_name, last_name);

	return 0;
}
