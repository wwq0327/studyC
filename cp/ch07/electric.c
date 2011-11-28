/* electric.c -- 计算用电帐目
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define RATE1 0.4724 /* 0~60度电价 */
#define RATE2 0.5524 /* 61~100度电价 */
#define RATE3 0.5824 /* 101~150度电价 */
#define RATE4 0.6324 /* 150以上度电价 */
#define BREAK1 60    /* 第一个分界点 */
#define BREAK2 100   /* 第二个分界点 */
#define BREAK3 150   /* 第三个分界点 */
#define BASE1 (RATE1 * BREAK1)                        /* 用电60度时费用 */
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1))     /* 用电100度时费用 */
#define BASE3 (BASE2 + RATE3 * (BREAK3 - BREAK2))     /* 用电150度时费用 */

int main()
{
	double kwh;  /* 用电的千瓦时 */
	double bill; /* 费用       */

	printf("请输入所用电的度数: ");
	scanf("%lf", &kwh);
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else 
		bill = BASE3 + (RATE4 * (kwh - BREAK3));

	printf("本月使用电 %.1f 千瓦时 , 费用为: %1.2f元.\n", kwh, bill);
	return 0;
}
