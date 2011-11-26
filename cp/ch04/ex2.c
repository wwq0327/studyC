/* ex2.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <string.h>

#define N "wyatt"

int main()
{
	printf("\"%s\"\n", N); /* 引号内输出 */
	printf("\"%20s\"\n", N); /* 右对齐，20字段 */
	printf("\"%-20s\"\n", N); /* 左对齐，20字段 */
	printf("\"%*s\"\n", strlen(N)+3, N); /* 比字符本身多三个字段 */

	return 0;
}
