/* strlen.c
 *
 * date: 2011-11-21
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int strlen(char *);

int main()
{
	char array[100];

	printf("%d\n", strlen("hello, world"));
	printf("%d\n", strlen(array));


	return 0;
}

int strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}
