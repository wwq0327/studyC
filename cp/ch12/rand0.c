/* rand0.c
 *
 * date: 2011-12-04
 * author: wwq0327 <wwq0327@gmail.com>
 */

#include <stdio.h>

static unsigned long int next = 1;
int rand0(void)
{
        next = next * 1103515245 + 123;
        return (unsigned int) (next/65536) % 32768;
}

