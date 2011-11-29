/* guess.c
 *
 * date: 2011-11-29
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int guess = 1;
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess if right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	while (getchar() != 'y')
	       printf("Well, the, is it %d?\n", ++guess);
        printf("I knew I could do it!\n");
 
	return 0;
}
