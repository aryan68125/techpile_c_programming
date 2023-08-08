#include<stdio.h>
#include<math.h>
int isArmstrong(int number)
    {
  int digits=0,backup_number=0,count=0,power=0,sum=0;
  backup_number=number;
  //counting digits
  do{
    ++count;
    backup_number=backup_number/10;
  }while(backup_number!=0);

  backup_number=number;
  //sumission of the powers of digits of the number
  while(backup_number!=0)
      {
    digits=backup_number%10;
    power = pow(digits,count);
    sum=sum+power;
    backup_number= backup_number/10;
  }
  if(sum==number){
    return number;
  }
  else{
    return 0;
  }

}

int main(){
  printf("Enter the upper limit of the armstrong number series\n");
  int limiter;
  int isArmstrongNumber=0;
  scanf("%d",&limiter);
  for(int number = 0; number<=limiter;number++)
    {
    isArmstrongNumber = isArmstrong(number);
    if(isArmstrongNumber!=0){
      printf("%d\n",number);
    }
  }
  return 0;
}