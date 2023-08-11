#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int strlength(char*str1){
  int count=0;
  for(int i=0;i<100;i++){
    if(str1[i]){
      count++;
    }
  }
  return count;
}
int main(){
  char string[100];
  for(int i=0; i<100;i++){
    string[i] = '\0';
  }
  printf("Enter the string value\n");
  gets(string);
  int count_characters = strlength(string);
  printf("length of string = %d", count_characters);
}