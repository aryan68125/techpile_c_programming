#include<stdio.h>
int checkPrime(int number);
int main()
{
  /*
  * If the during the loop execution the number get divided by i then the number is not a prime number
  * If the i is equal to the number then the number is a prime number
  * */
   int number;
   printf("Enter the number to checked\n");
   scanf("%d",&number);
   int flag = checkPrime(number);
   if(flag == 1){
     printf("%d is prime", number);
   }
   else{
     printf("%d is not prime", number);
   }
}
int checkPrime(int number){
  int i;
  for(i=2;i<=number;i++){
    if(number%i == 0 ){
      break;
    }
  }
  if(number == i){
    return 1; //number is prime
  }
   else{
    return 0; //number is not a prime
  }
}