//wap to print armstrong number example 153 370
#include<stdio.h>
#include<math.h>
int main(){
  printf("Enter a number \n");
  int number ;
  scanf("%d",&number);
  int temp=number;
  int digits;
  int sum;
  int cube;
  int count=0;
  while(temp>0){
    count++;
    temp=temp/10;
  }
  temp=number;
  while(temp>0){
    digits = temp%10;
    cube = pow(digits,count);
    sum=sum+cube;
    temp=temp/10;
  }
  if(sum==number){
    printf("the number %d is armstrong number\n", number);
  }
  else{
    printf("the number %d is not an armstrong",number);
  }
}