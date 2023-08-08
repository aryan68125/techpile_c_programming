#include<stdio.h>
int main(){
  printf("Enter the number to check if it is even or odd\n");
  int number;
  scanf("%d",&number);
  int result = number%2;
  switch(result)
  {
  case 0:
    printf("%d even\n",number);
    break;
  case 1:
    printf("%d odd\n",number);
    break;
  default:
    printf("Error! Something went wrong....\n");
  }
}