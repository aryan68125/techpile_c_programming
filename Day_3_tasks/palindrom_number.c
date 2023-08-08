#include<stdio.h>
int main()
{
  int number, reverse=0,remainder,original_number_backup;
  printf("Enter the number to be checked as a palindrome\n");
  scanf("%d",&number);
  original_number_backup=number;
  while (number!=0)
    {
    remainder = number%10;
    reverse = reverse*10 + remainder;
    number = number/10;
  }
  printf("reverse number = %d\n",reverse);
  printf("The number is = %d\n", original_number_backup);
  printf("Checking if palindrome\n");
  if(reverse == original_number_backup)
    {
    printf("the number %d is palindrom\n",original_number_backup);
  }
  else{
    printf("The number %d is not a palindrom\n",original_number_backup);
  }
  return 0;
}