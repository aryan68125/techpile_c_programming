#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter string1\n");
    gets(str1);
    printf("Enter string2\n");
    gets(str2);
    
    int flag = strcmp(str1,str2);
    if(flag == 0){
      printf("%s is equal to %s\n", str1,str2);
    }
    else{
      printf("%s is not equal to %s\n",str1,str2);
    }
}