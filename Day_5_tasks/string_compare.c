#include<stdio.h>
#include<string.h>
int main()
{
  printf("Enter the first string\n");
  char str1[20];
  scanf("%[^\n]%*c", str1);
  printf("Enter the second string\n");
  char str2[20];
  scanf("%[^\n]%*c", str2);
  
  printf("The First String entered by the user\n");
  printf("%s\n",str1);
  printf("The scond String entered by the user\n");
  printf("%s\n",str2);
  
  //compare the two string and print the result
  if(strcmp(str1,str2)<0)
    {
    printf("The First String is less than the Second String\n");
  }
  else if(strcmp(str1,str2)>0){
    printf("The second String is less than the First String\n");
  }
  else{
    printf("The first and second Strings are the same \n");
  }
}