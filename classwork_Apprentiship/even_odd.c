#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int evenOdd(int number){
  if (number%2 == 0){
    return 0;
  }
  else{
    return 1;
  }
}
int main(){
  int number;
  printf("Enter the number that you want to check for even and odd\n");
  scanf("%d",&number);
  
  printf("Checking for even or odd\n");
  int flag = evenOdd(number);
  if(flag == 0){
    printf("The number %d is even\n", number);
  }
  else{
    printf("The number %d is odd\n",number);
  }
}