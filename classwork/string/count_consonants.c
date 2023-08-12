#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check_consonants(char ch){
  int flag = 0;
  if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
     flag = 1; //if character is a vowel in upper case
  }
  else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    flag = 1; //if character is a vowel in lower case
  }
  else if(ch == ' '){
    flag = 1; // this else if block prevents the counter from counting white spaces
  }
  else{
    flag = 0;
  }
  return flag;
}
int count_Consonants(char*str){
  int count = 0;
  for(int i=0;i<100;i++){
    if(str[i] == '\0'){
      break;
    }
    if(check_consonants(str[i]) == 0){
      count++; //check_consonants(str[i]) will return 0 if the character is a consonant
    }
  }
  return count;
}
int main(){
  char str[100];
  printf("Enter the string value\n");
  gets(str);
  
  printf("The String entered by the user is  = %s\n",str);
  
  int count_consonants = count_Consonants(str);
  printf("In string %s there are %d consonants\n",str,count_consonants);
}