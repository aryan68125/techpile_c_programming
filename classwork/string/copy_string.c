#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char str1[100];
   char str2[100];
   printf("enter the string1\n");
   gets(str1);
   printf("printing the string 1 \n");
   printf("%s",str1);
   printf("\n");
   printf("printing the string 2\n");
   printf("%s",str2);
   printf("\n");
   printf("copying the string from str1 to str 2\n");
   strcpy(str2,str1);
   printf("printing the string 1 \n");
   printf("%s",str1);
   printf("\n");
   printf("printing the string 2\n");
   printf("%s",str2);
   printf("\n");
}