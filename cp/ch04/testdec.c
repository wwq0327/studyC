/* testdec.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#define PI 3.1415926

int main()
{
	printf("%f\n", PI);
	printf("%.2f\n", PI); /* 保留两位小数 */
	printf("%10.5f\n", PI); /* 保留五位小数， 数据总字段长为 10 位 */

	return 0;
}
