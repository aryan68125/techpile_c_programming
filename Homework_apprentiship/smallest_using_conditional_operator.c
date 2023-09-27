#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int find_smallest(int number1, int number2, int number3){
  //small = (a<b) ? (a<c?a:c) : (b<c?b:c);
  int smallest = (number1<number2) ? (number1<number3 ? number1 : number3) : (number2<number3 ? number2 : number3);
  return smallest;
}
int main(){
  int number1, number2, number3;
  printf("Enter number1\n");
  scanf("%d",&number1);
  printf("Enter number2\n");
  scanf("%d",&number2);
  printf("Enter number 3\n");
  scanf("%d",&number3);
  
  int smallest = find_smallest(number1,number2,number3);
  printf("the smallest number among %d %d %d is = %d",number1,number2,number3,smallest);
}