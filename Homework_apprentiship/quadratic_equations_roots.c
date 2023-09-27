#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int discriminant(int a, int b,int c){
  // discriminant (D) = b^2 -4ac
  int b_square = pow(b,2);
  int four_ac = 4*a*c;
  int discriminant_ = b_square - four_ac;
  return discriminant_;
}
int main(){
  //ax^2 + by + c =0
  printf("quadratic equation --> ax^2 + by + c = 0\n");
  printf("enter the coefitient of X^2 --> a\n");
  int a,b,c;
  scanf("%d",&a);
  printf("enter the coefitient of x --> b\n");
  scanf("%d",&b);
  printf("enter the constant term --> c \n");
  scanf("%d",&c);
  
  int D = discriminant(a,b,c);
//  switch(D>0){ doesn't work on some machine
//    case 1:
//      printf("The roots are real and unequal.\n");
//      break;
//    case 0:
//      switch(D<0){
//      case 1: printf("The roots are imaginary and unequal.\n");
//        break;
//      case 0: printf("The roots are real and equal.\n");
//        break;
//      }
//  }
  if(D<0){
    printf("The roots are imaginary and unequal.\n");
  }
  else if(D > 0){
    printf("The roots are real and unequal.\n");
  }
  else{
    // if D == 0
    printf("The roots are real and equal.\n");
  }
}