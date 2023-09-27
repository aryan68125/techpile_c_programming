#include<stdlib.h>
#include<stdio.h>
void days(int ch){
  switch(ch){
    case 1 : printf("Monday\n");
      break;
    case 2 : printf("Tuesday\n");
      break;
    case 3 : printf("Wednesday\n");
      break;
    case 4 : printf("Thursday\n");
      break;
    case 5 : printf("Friday\n");
      break;
    case 6 : printf("Saturday\n");
      break;
    case 7 : printf("Sunday\n");
      break;
    default: printf("There are only 7 days in a week you bafoon\n");
  }
}
int main(){
  printf("Enter the number o fthe day\n");
  int choice ;
  scanf("%d",&choice);
  days(choice);
}