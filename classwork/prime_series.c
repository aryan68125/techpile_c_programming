//wap to print the prime number between 2 to n
#include<stdio.h>
int checkPrime(int number);
int main(){
  int limiter;
  printf("Enter the upper limit of the seires\n");
  scanf("%d",&limiter);
  for(int i=2;i<=limiter;i++){
    int flag = checkPrime(i);
    if(flag == 1){
      printf("%d\n",i);
    }
  }
}
int checkPrime(int number)
{
  int count=0;
  for(int i=1;i<=number;i++){
    if(number%i == 0){
      ++count;
    }
  }
  if(count == 2){
    return 1 ; // the number is prime
  }
  else {
    return 0 ;  //The number is not a prime number
  }
}    