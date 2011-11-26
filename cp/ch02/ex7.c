/* ex7.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

void one_three(void);
void two(void);
void three(void);

int main()
{
	printf("Starting now:\n");
	one_three();
	printf("done!\n");

	return 0;
}

void one_three(void)
{
	printf("one\n");
	two();
	three();
}
void two(void)
{
	printf("two\n");
}

void three(void)
{
	printf("three\n");
}
