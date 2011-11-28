/* wodcnt.c -- 统计字符、单词和行
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main()
{
	char c;                  // 读入字符
	char prev;               // 前一个读入字符
	long n_chars = 0L;       // 字符数
	int n_lines = 0;         // 行数
	int n_words = 0;         // 单词数
	int p_lines = 0;         // 不完整的行数
	bool inword = false;     // 如果c在一个单词中，则inword等于true

	printf("Enter text to be analyzed (| to terminate): \n");
	prev = '\n';             // 用于识别完整行
	while ((c = getchar()) != STOP)
	{
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (!isspace(c) && !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(c) && inword)
			inword = false;
		prev = c;
	}
	if (prev != '\n')
		p_lines = 1;
	printf("characters = %ld, words = %d, lines = %d, ", 
	       n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);

	return 0;
}
