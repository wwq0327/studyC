/* strtest.c
 *
 * date: 2011-12-05
 * author: wwq0327 <wwq0327@gmail.com>
 */

#include <stdio.h>
#define LEN 20

struct name {
        char first[LEN];
        char last[LEN];
};

int main()
{
        struct name fellow = {"wyatt", "wang"};
        struct name *him;
        him = &fellow;

        printf("First name: %s, Last name: %s\n", him->first, him->last);

        return 0;
}
