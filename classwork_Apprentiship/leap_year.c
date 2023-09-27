#include<stdio.h>
int LeapYearCheck(int year){
  if(year%4 == 0){
    return 1; //is a leap year
  }
  else if( year%400 == 0){
    return 1; //is a leap year
  }
  else if(year%100 == 0){
    return 0; //is not a leap year
  }
  else{
    return 0; // is not a leap year
  }
}
int main(){
  int year;
  printf("Enter the year that you want to check wheather its a lep year or not\n");
  scanf("%d",&year);
  
  printf("analyzing the year\n");
  int flag = LeapYearCheck(year);
  if(flag == 1){
    printf("%d is Leap year\n",year);
  }
  else{
    printf("%d is not a leap year\n",year);
  }
}