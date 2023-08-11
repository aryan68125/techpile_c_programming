#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void revstr(char *str1)  
{  
  // declare variable  
  int i, len, temp;  
  len = strlen(str1); // use strlen() to get the length of str string  

  // use for loop to iterate the string   
  for (i = 0; i < len/2; i++)  
  {  
    // temp variable use to temporary hold the string  
    temp = str1[i];  
    str1[i] = str1[len - i - 1];  
    str1[len - i - 1] = temp;  
  }  
}  
int main(){
  char name [40];
  printf("Enter the name\n");
  gets(name);
  printf("The name you entered is %s\n",name);
  char temp [40];
  strcpy(temp,name);
  revstr(temp);
  int flag = strcmp(temp,name); //strcmp will return 0 if both the strings are equal
  if( flag ==0){
    //if string temp and name are equal
    printf("%s is a palindrom string\n",name);
  }
  else{
    printf("%s is not a palindrom string\n",name);
  }
}