/* rhodium.c
 * 用金属铑衡量你的体重
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>

int main()
{
	float weight;
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	scanf("%f", &weight);
	value = 770 * weight *14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("You are easily worth that! If rhodium prices drop.\n");
	printf("eat more to maintain your value.\n");

	return 0;
}
