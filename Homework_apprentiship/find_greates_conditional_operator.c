#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int find_greates(int number1, int number2){
  int greater = 0;
  greater = number1<number2 ? number2 : number1;
  return greater;
}
int main(){
  printf("Enter the number 1\n");
  int number1;
  scanf("%d",&number1);
  printf("Enter the number 2\n");
  int number2;
  scanf("%d",&number2);
  
  int greater = find_greates(number1,number2);
  printf("the greatest number among %d and %d is = %d",number1,number2,greater);
}