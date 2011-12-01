/* puts.c
 *
 * date: 2011-12-01
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
int puts(const char *string);

int main()
{
	int c;
	char *msg = "hello";
	c = puts(msg);
	printf("%d\n", c);

	return 0;
}

int puts(const char *string)
{
	int count = 0;
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	return count;
}
