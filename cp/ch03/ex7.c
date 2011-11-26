/* ex7.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	int heigh;
	printf("请输入你的身高：");
	scanf("%d", &heigh);
	printf("你的身高是 %d cm, 转换为英寸为： %.2f 英寸.\n", heigh, heigh/2.54);

	return 0;
}
