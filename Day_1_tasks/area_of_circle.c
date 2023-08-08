#include <stdio.h>
int main(){
  printf("Enter the radius of the circle and get the area of the circle\n");
  int r;
  printf("Enter the radius of the circle\n");
  scanf("%d",&r);
  float area = (3.14)*r*r;
  printf("The area of the circle is %f",area);
  return 0;
}