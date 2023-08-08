//how many digits are even in a number
#include<stdio.h>
int evenDigits(int number);
int  main()
{
  printf("Enter a number\n");
  int number ;
  scanf("%d",&number);
  int even_digits = evenDigits(number);
  printf("%d have %d even digits\n", number,even_digits);
}

int evenDigits(int number)
{
  int backup_number,count=0,digits;
  backup_number=number;
  while(number!=0){
    digits=number%10;
    if(digits%2 == 0){
      ++count;
    }
    number=number/10;
  }
  return count;
}