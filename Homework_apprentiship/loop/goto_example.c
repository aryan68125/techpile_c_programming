#include<stdio.h>
int main(){
  int a=1,b=2,c=4,x=5,y=6;
  y=a+b;
  goto LABEL;
  x= a-b;
  LABEL;
  c =a/b;
  b=x%y;
  printf("%d,%d,%d,%d",x,y,a,b);
}