/* hotel.h -- hotel.c 中的常量定义和函数声明 */

#define QUIT     5
#define HOTEL1   80.00
#define HOTEL2   125.00
#define HOTEL3   155.00
#define HOTEL4   200.00
#define DISCOUNT 0.95
#define STARS    "*****************************"

// 给出选项列表
int menu(void);

// 返回预定的天数
int getnights(void);

//按饭店里的星级和预定的天数计算价格并显示出来
void showprices(double, int);
