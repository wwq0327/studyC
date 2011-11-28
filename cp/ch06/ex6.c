/* ex6.c
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <string.h>

#define SIZE 40

int main()
{
	char words[SIZE];
	int index, i;

	printf("Please Enter a string:");
	scanf("%s",words);
	index = strlen(words);

	for( i = index; i >= 0; i--)
	{
		printf("%c", words[i]);
	}

	printf("\n");

	return 0;
}
