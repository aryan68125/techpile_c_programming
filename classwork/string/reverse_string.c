#include<stdio.h>
#include<stdlib.h>
int str_length(char*name){
  int count = 0;
  for(int i=0; i<100; i++){
    if(name[i] == '\0'){
      break;
    }
    count++;
  }
  return count;
}
void reverse_string(char*name){
  int temp;
  int name_length = str_length(name);
  for(int i=0;i<name_length/2;i++){
     temp=name[i];
     name[i]=name[name_length -i -1];
     name[name_length -i -1] = temp;
  }
}
int main(){
  char name[100];
  for(int i=0; i<100;i++){
    name[i]='\0';
  }
  printf("Enter the string value\n");
  gets(name);
  
  printf("printing the entered string value\n");
  printf("%s",name);
  printf("\n");
  
  reverse_string(name);
  
  printf("printing string after revserse string operation\n");
  printf("%s",name);
  printf("\n");
}