/* ex7_8.c - 此代码还有问题
 *
 * date: 2011-11-28
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

#define BASEPAY    10
#define BASEHRS    40
#define OVERTIME   1.5
#define AMT1       300
#define AMT2       150
#define RATE1      0.15
#define RATE2      0.20
#define RATE3      0.25

void menu(void);
void core(double hours);

int
main(void)
{
	char c;
	double hours;

	menu();

	while ((c = getchar()) != 'q')
	{
		switch(c)
		{
		case '1':
			hours = 8.75;
			core(hours);
			break;
		case '2':
			hours = 9.33;
			core(hours);
			break;
		case '3':
			hours = 10.00;
			core(hours);
		case '4':
			hours = 11.20;
			core(hours);
			break;
		default:
			menu();
			/* break; */
		}
	       
		/* printf("所输入选项不存在，请重新输入!\n"); */
	}

	return 0;
}

void core(double hours)
{
	/* double hours; */
	double gross;
	double net;
	double taxes;

	printf("Enter the number of hours worked this week: ");
	scanf("%lf", &hours);
	if (hours <= BASEHRS)
		gross = hours * BASEPAY;
	else
		gross = BASEHRS * BASEPAY + (hours - BASEHRS) * BASEPAY * OVERTIME;
	if (gross <= AMT1)
		taxes = gross * RATE1;
	else if (gross <= AMT1 + AMT2)
		taxes = AMT1* RATE1 + (gross - AMT1) * RATE2;
	else
		taxes = AMT1* RATE1 + AMT2 * RATE2 + (gross - AMT1- AMT2) * RATE3;
	net = gross - taxes;

	printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);

	/* return 0; */
}

void menu(void)
{
	printf("\n*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate of action:\n");
	printf("%s%35s\n", "1) $8.75/hr", "2) $9.33/hr");
	printf("%s%35s\n", "3) $10.00/hr", "4) $11.20/hr");
	printf("q) quit\n");
	printf("*****************************************************************\n");
}

