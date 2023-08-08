#include<stdio.h>
int main(){
  printf("This program read the temprature state below 0 and return freezing weather\n");
  printf("if the temperature is 0~10 then very cold weather\n");
  int temperature;
  printf("Enter the temperature value\n");
  scanf("%d",&temperature);
  if(temperature<0)
    {
    printf("Freezing weather\n");
  }
  else if(0<=temperature && temperature<=10)
    {
    printf("very cold weather\n");
  }
  else
    {
    
  }
  return 0 ;
}