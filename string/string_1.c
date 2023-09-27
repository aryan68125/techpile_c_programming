#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  printf("Enter the size of string\n");
  
  //method 1
  int size1 ;
  scanf("%d",&size1);
  printf("Enter the first string \n");
  char str1[size1];
  scanf("%s",str1);
  
  //method 2
  printf("Enter the second string\n");
  char str2[size1];
  scanf("%[^\n]s",str2);
  
  //method 3
  //the string here will be treated as immutable
  char *s = "starScream"; //this string cannot be modified
  
  printf("printing the first string\n");
  printf("%s",str1);
  printf("\n");
  int len1 = strlen(str1);
  printf("the length of the first string is :->%d\n",len1);

  
  printf("printing the second string\n");
  str2[0] = '-';
  printf("%s",str2);
  printf("\n");
  int len2 = strlen(str2);
  printf("the length of the second string is :->%d\n",len2);
  
  printf("printing the third string *s\n");
  printf("%s",s);
}