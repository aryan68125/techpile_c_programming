#include<stdio.h>
int main(){
  printf("This program will print each digit of a number in characters\n");
  printf("Enter the number you want to convert into char\n");
  int i;
  scanf("%d",&i);
  char c = (char)(i);
  printf("%c", c);
  return 0;
}