#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int CheckArmstrong(int number);
int main()
{
   printf("Enter the number that you want to check for armstrong\n");
   int number ;
   scanf("%d",&number);
   
   int Check_arm = CheckArmstrong(number);
   if(Check_arm==1){
     printf("%d is an armstrong number\n", number);
   }
   else{
     printf("%d is not an armstrong number\n", number);
   }
}
int CheckArmstrong(int number){
  int sum=0,power,digits,count=0,backup_number;
  backup_number=number;
  
  //counting the number of digits
  do{
    number=number/10;
    ++count;
  }while(number!=0);
  
  //calculating the summision
  number=backup_number;
  while(number!=0){
    digits=number%10;
    power = pow(digits,count);
    sum=sum+power;
    number=number/10;
  }
  if(sum==backup_number){
    return 1;
  }
  else{
    return 0;
  }
}