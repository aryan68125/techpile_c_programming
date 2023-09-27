#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int calculate(int x , int a, int b, int c){
  int result=0;
  int x_cube = pow(x,3);
  int x_square = pow(x,2);
  switch(x){
    case 1:
      result = (a*x_cube)+(b*x_square)+c;
    break;
    case 2:
      result = (a*x_square)+(b*x)+c;
      break;
    case 3:
      result = (a*x)+(b)+c;
      break;
    case 4:
      result = (a*x)+(b);
      break;
      default: printf("wrong choice\n");
  }
  return result;
}
int main(){
  int x ,a,b,c;
  printf("enter x\n");
  scanf("%d",&x);
  printf("enter a,b,c respectively\n");
  scanf("%d %d %d",&a,&b,&c);
  
  int result = calculate(x,a,b,c);
  printf("The result is  = %d",result);
}