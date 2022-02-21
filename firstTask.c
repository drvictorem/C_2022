#include <stdio.h>
#define PI 3.1415592653589L
#define AREA "Площадь тора"
#define VOLUME "Объем тора"

int main () {


  int bigDiameter, smallDiameter;
  double surfaceArea, volumThor, bigRadius, smallRadius;

  bigDiameter = 789;
  smallDiameter = 341;

  surfaceArea = PI * PI * bigDiameter * smallDiameter;
  volumThor = (PI * PI * bigDiameter * smallDiameter * smallDiameter) / 4;

  bigRadius = (double)bigDiameter / 2;
  smallRadius = (double)smallDiameter / 2;

  printf("Большой диаметр тора = %u \n", bigDiameter);
  printf("Маленький диаметр тора = %u \n", smallDiameter);
  printf("Большой радиус тора = %f \n", bigRadius);
  printf("Маленький радиус тора = %f \n", smallRadius);
  printf("%s = %f\n", AREA, surfaceArea);
  printf("%s = %f\n", VOLUME, volumThor);


  return 0;



}
