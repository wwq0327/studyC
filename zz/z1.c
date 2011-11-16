#include <stdio.h>
/* z1.c

 * date: 2011-11-16
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

int main()
{
	int x = 1, y = 2, z[10];
	int *ip;

	ip = &x;  // IP是指向int类型的指针
	printf("IP: %d\n", ip);

	y = *ip; 
	printf("当前y的值为: %d\n", y);

	*ip = 0;
	printf("*ip = 0, 则*ip的值为: %d\n", *ip);
	*ip = *ip + 10;
	printf("*ip + 10的值为: %d\n", *ip);

	ip = &z[0];
	printf("IP: 指同z[0]的地址为： %d, 值为: %d\n", ip, *ip);

	return 0;
	int w = 1;
	printf("w指针： %d\n", &w);


}
