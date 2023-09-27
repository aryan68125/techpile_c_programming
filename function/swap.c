#include<stdio.h>
void swap(int *num1, int *num2){
  int temp = *num1;
  *num1=*num2;
  *num2 = temp;
}
void swap2(int num1,int num2){
  int temp = num1;
  num1=num2;
  num2 = temp;
}
int main(){
  printf("Enter the number 1\n");
  int num1,num2;
  scanf("%d",&num1);
  printf("Enter num2\n");
  scanf("%d",&num2);
  printf("a=%d, b=%d\n",num1,num2);
  //don't sent value just send variable address
  swap(&num1,&num2);
  printf("a=%d, b=%d\n",num1, num2);
  
  printf("a=%d, b=%d\n",num1,num2);
  //This method dd not work as the changes to num1 and num2 did not take place after running swap2 function.
  swap2(num1,num2);
  printf("a=%d, b=%d\n",num1, num2);
}