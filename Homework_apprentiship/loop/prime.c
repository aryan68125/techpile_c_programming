#include<stdio.h>
int main(){
  int number,count=0;
  printf("Enter the number to be checked as a prime\n");
  scanf("%d",&number);
  for(int i=2;i<=(number/2);i++){
    if(number%i == 0){
      count=1;
    }
  }
  if(count==0){
    printf("the number %d is a prime number\n",number);
  }
  else{
    printf("the number %d is not a prime number\n",number);
  }
}