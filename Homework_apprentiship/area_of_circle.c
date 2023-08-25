#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float areaOfCircle(float radius){
  float pie = 3.141592653;
  float area= pie * pow(radius,2);
  return area;
}
int main(){
  float radius;
  printf("Enter the radius of a circle\n");
  scanf("%f",&radius);
  
  float area = areaOfCircle(radius);
  printf("Area of the circle is = %f", area);
}