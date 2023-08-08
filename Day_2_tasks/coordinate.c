#include<stdio.h>
int main(){
  printf("This program will classify the coordinates based on X and Y into their respective quadrant\n");
  int X,Y;
  printf("Enter X\n");
  scanf("%d",&X);
  printf("Enter Y\n");
  scanf("%d",&Y);
  if(X<0 && Y <0)
    {
    printf("(%d,%d) is in Third quadrant",X,Y);
  }
  else if(X>0 && Y>0)
    {
    printf("(%d,%d) is in First quadrant",X,Y);
  }
  else if(X<0 && Y>0)
    {
    printf("(%d,%d) is in Second quadrant",X,Y);
  }
  else
    {
    printf("(%d,%d) is in Fourth quadrant",X,Y);
  }
}