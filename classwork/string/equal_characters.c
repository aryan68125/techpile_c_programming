#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int char_compare_str(char*str1, char*str2){
  int count=0;
  for(int i=0; i<100;i++){
    if(str1[i] == str2[i]){
      count++;
    }
    if(str1[i] == '\0' || str2[i] == '\0'){
      break;
    }
  }
  return count;
}
int main(){
  char str1[100];
  char str2[100];
  
  printf("Enter string1 value\n");
  gets(str1);
  printf("Enter string2 value\n");
  gets(str2);
  
  printf("string1 = %s\n",str1);
  printf("string2 = %s\n",str2);
  
  int samechar = char_compare_str(str1,str2);
  printf("The number of characters which are same in string1 -> %s and string2 ->%s are = %d\n",str1, str2,samechar);
}