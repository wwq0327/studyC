/* r_drive0.c
 *
 * date: 2011-12-04
 * author: wwq0327 <wwq0327@gmail.com>
 */

#include <stdio.h>
extern int rand0(void);

int main()
{
        int count;

        for (count = 0; count < 5; count++)
                printf("%hd\n", rand0());

        return 0;
}
