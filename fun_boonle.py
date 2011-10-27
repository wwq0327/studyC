#include <stdio.h>

main()
{
    for(int i = 0; i <= 10; i++){
        int b = !( i % 2);
        if (b){
            printf("%d是偶数\n", i);
        } else {
            printf("%d是奇数\n", i);
        }
     }
}
