#include<stdio.h>
int main(){
  printf("Enter the number of the day in the week\n");
  int day_number;
  scanf("%d",&day_number);
  switch(day_number)
  {
  case 1:
    printf("Sunday\n");
    break;
  case 2:
    printf("Monday\n");
    break;
  case 3:
    printf("Tuesday\n");
    break;
  case 4:
    printf("Wednesday\n");
    break;
  case 5:
    printf("Thursday\n");
    break;
  case 6:
    printf("Friday\n");
    break;
  case 7:
    printf("Saturday\n");
    break;
  default:
    printf("Error! Enter the correct day number....\n");
  }
}