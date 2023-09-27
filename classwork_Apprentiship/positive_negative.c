#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int checkPositive_negative(int num){
  if(num<0){ //if number is negative
    return 1;
  }
  else{  //if number is positive
    return 0;
  }
 
}
int main(){
  int number;
  printf("Enter the number \n");
  scanf("%d",&number);
  
  int flag = checkPositive_negative(number);
  if(flag == 1){
    printf("The number %d is negative\n",number);
  }
  else{
    printf("The number %d is positive\n",number);
  }
}