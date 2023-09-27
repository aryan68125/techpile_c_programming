#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int distance(int x,int y,int x1,int y1){
  int distance_  = sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
  return distance_;
}
int main(){
  float x,y,x1,y1,r;
  printf("Enter coordinates of center of the circle\n");
  printf("Enter the x coordinate\n");
  scanf("%f",&x);
  printf("Enter Y coordinate \n");
  scanf("%f",&y);
  printf("Enter the radius of the circle\n");
  scanf("%f",&r);
  printf("enter the coordinate of the point\n");
  printf("Enter x1\n");
  scanf("%f",&x1);
  printf("Enter y1\n");
  scanf("%f",&y1);
  
  int distance_between = distance(x,y,x1,y1);
  if(distance_between>r){
    printf("the point lies outside the circle\n");
  }
  else if(distance_between<r){
    printf("the point lies inside the circle\n");
  }
  else{
    printf("the point lies on the circumference of the circle\n");
  }
}