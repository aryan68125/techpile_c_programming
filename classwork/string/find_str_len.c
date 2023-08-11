#include<stdio.h>
#include<string.h>
int main()
{
  char name[30] ;
  printf("Enter the name \n");
  gets(name);
  printf("printing the name\n");
  printf("%s",name);
  printf("calculating the length of the string\n");
  int len = strlen(name);
  printf("The length of the entered name is %d\n",len);
}