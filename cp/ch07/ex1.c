/* ex1.c --  读到输入直到遇到#，并打印报告
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main()
{
	char c; // 读入字符
	long n_chars = 0L; // 其它字符数
	int n_lines = 0;   // "\n"数目
	int n_spaces = 0;  // 空格数
	printf("请入一段英文字符:");

	while ((c =getchar()) != STOP)
	{
		if (c == '\n')
			n_lines++;
		else if (c == ' ')
			n_spaces++;
		else
			n_chars++;
	}
	printf("字符数： %ld, 空格数: %d, 换行数： %d.\n", 
	       n_chars, n_spaces, n_lines);

	return 0;
}
