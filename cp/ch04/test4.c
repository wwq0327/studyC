/* test4.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define B "booboo"
#define X 10

int main()
{
	int age;
	char name[12];
	int xp;

	printf("Please enter your first name:");
	scanf("%s", name);
	printf("All right, %s, what's your age?\n", name);
	scanf("%d", &age);
	xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B, xp);

	return 0;
}
