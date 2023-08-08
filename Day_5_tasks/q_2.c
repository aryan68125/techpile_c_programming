#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()  
{  
  char str[40], reverse[40]; // declare the size of character string  
  printf ("Enter a string to be reversed: \n");
  //this is the only way you can enter a string otherwise you will be stuck in the runtime enter state of the c program
  //scanf ("%[^\n]%*c", str); allows to detect new line and helps the program to exit the runtime inpur state.
  scanf ("%[^\n]%*c", str);  
  printf("The original string is = %s\n",str);
  
  //counting the number of character in the string
  int count=0;
  while(str[count] != '\0'){
    count++;
  }
  printf("The length of the string is = %d\n",count);
  printf("Reversing the string \n");
  int end = count-1;
  int begin;
  for(begin=0;begin<count;begin++){
     reverse[begin] = str[end];
     end--;
  }
  reverse[begin]='\0';
  printf("The revserse of the string is = %s\n",reverse);
}
