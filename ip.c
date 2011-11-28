#include <stdio.h>
int main()
{
	int x = 1;
	int *ip;
	
	ip = &x;
	printf("ip: %c,,,,,*ip: %d\n", ip, *ip);
	return 0;
}
