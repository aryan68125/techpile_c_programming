#include<stdio.h>
int main(){
  enum value{
    a=-1, b, c, d=0 , e, f
  };
  printf("%d %d %d %d %d %d",a,b,c,d,e,f);
}