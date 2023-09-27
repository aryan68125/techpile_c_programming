#include<stdio.h>
int count(int number, int counting){
  if(number ==0){
    return counting;
  }
  counting++;
  return count(number/10,counting);
}
int main(){
  int number;
  printf("Enter the number \n");
  scanf("%d",&number);
  int counting = count(number, 0);
  printf("The number of digits in the number %d is = %d", number,counting);
}