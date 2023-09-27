#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int perimeter(int length,int breadth){
  int result = 2*(length + breadth);
  return result;
}
int area(int length, int breadth){
  int result = length * breadth;
  return result;
}
int main(){
  printf("Enter the length of a rectangle\n");
  int length, breadth;
  scanf("%d", &length);
  printf("Enter the breadth of a rectangle\n");
  scanf("%d", &breadth);
  
  int area_ = area(length, breadth);
  printf("The area of a rectangle is %d\n", area_);
  
  int perimeter_ = perimeter(length,breadth);
  printf("The perimeter of rectangle is %d\n", perimeter_);
}