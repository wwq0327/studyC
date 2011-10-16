#include <math.h>
#include <stdio.h>

double distance(double x1, double x2, double y1, double y2);
double area_point(double x1, double x2, double y1, double y2);

int main(void)
{
  printf("distance is %f\n", distance(1.0, 2.0, 4.0, 6.0));
  printf("area is %f\n", area_point(1.0, 2.0, 4.0, 6.0));
  return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
  double dx = x2 - x1;
  double dy = y2 - y1;
  /* printf("dx is %f\ndy is %f\n", dx, dy); */
  double dsquared = dx * dx + dy * dy;
  /* printf("dsquared is %f\n", squared); */
  double result = sqrt(dsquared);

  return result;
}

double area_point(double x1, double x2, double y1, double y2)
{
  double radius = distance(x1, x2, y1, y2);

  return 3.14156 * radius * radius;
}
