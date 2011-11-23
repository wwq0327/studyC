/* pstr.c
 *
 * date: 2011-11-23
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
/* strcpy: copy t to s; array subscript vesion */

void strcpy(char *s, char *t)
{
	int i;

	i = 0;
	while ((s[i] = t[i]) != '\0')
	       i++;
}

int main()
{
	char *pt;
        pt = "now is the time\n";
	char *ps;
	strcpy(pt, ps);
	printf("%c", ps);

	return 0;


}
