/* ex5.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int age;
	float year = 3.156e7;
	printf("请输入你的年龄：");
	scanf("%d", &age);
	printf("你的年龄是: %d, 合为 %e 秒. \n", age, (float)age * year);

	return 0;
}
