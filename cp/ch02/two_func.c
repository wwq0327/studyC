/* two_func.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

void butler(void);

int main()
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes, Bring me some tea and writeable CD_ROMS.\n");

	return 0;
}

void butler(void)
{
	printf("You rang, sir?\n");
}
