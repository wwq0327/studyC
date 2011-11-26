/* talkback.c -- 一个能为你提供一些信息的对话程序
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main()
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n");
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("and we have %d bytes to store is in.\n", size);

	return 0;
}
