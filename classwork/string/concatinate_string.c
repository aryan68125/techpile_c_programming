#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void concatinate_string(char*first_name,char*last_name,char*full_name){
  int first_name_length = strlen(first_name);
      int j=0;
  for(int i=0;i<100;i++){
    if(first_name[i] == '\0' && last_name[j] == '\0'){
      break;
    }
    if (first_name[i] != '\0'){
      full_name[i] = first_name[i];
    }
    if(first_name_length-1 == i){
      full_name[i+1] = ' ';
    }
    if(first_name[i] == '\0'){
      if(last_name[j] != '\0'){
        full_name[i+1] = last_name[j];
        j++;
      }
    }
  }
}
int main()
{
   char first_name[100];
   char last_name[100];
   char full_name[100];
   printf("Enter the first name\n");
   gets(first_name);
   printf("Enter the last name\n");
   gets(last_name);
   printf("the first name is %s\n",first_name);
   printf("the last name is %s\n",last_name);
   concatinate_string(first_name,last_name,full_name);
   printf("full name = %s\n",full_name);
}