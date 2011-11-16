#include <stdio.h>
/* p1.c

 * date: 2011-11-16
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

int strlen(char *);

int main()
{
	char *s = "Hello, world";
	printf("%s 的长度为: %d\n", s, strlen(s));

	return 0;
}

int strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return n;
}
