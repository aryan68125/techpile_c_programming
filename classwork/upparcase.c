#include<stdio.h>
#include <ctype.h>
int main(){
  char ch;
  char result;
  printf("Enter the character to be upparcased\n");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
    {
    result = tolower(ch);
    printf("%c to lowercase\n",result);
  }
  else if(ch>='a' && ch<='z'){
    result = toupper(ch);
    printf("%c to upparcase\n",result);
  }
  else{
    printf("symbol cannot be converted into upper case or lower case");
  }
  return 0;
}