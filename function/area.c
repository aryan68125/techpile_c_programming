#include<stdio.h>
#include<math.h>
void rectangle(int length, int breadth, int *area, int *perimeter){
  *area =length*breadth;
  *perimeter = 2*(length+breadth);
}
int main(){
  int length,breadth,area=1,perimeter=0;
  printf("Enter length of the rectangle\n");
  scanf("%d",&length);
  printf("Enter the breadth of the rectangle\n");
  scanf("%d",&breadth);
  
  rectangle(length, breadth, &area,&perimeter);
  printf("printing the area of rectangle = %d\n",area);
  printf("printing perimeter of rectangle = %d\n",perimeter);
}