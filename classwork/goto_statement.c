#include<stdio.h>
int main()
{
    int a ,b;
    char choice;
    label:
    printf("Enter 2 numbers : \n");
    scanf("%d%d",&a,&b);
    
    printf("result = %d\n", (a+b));
    printf("Do you want to continue y/n\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice == 'y' || choice == 'Y'){
      goto label ; //label is an identifier , label defines a place, blocks or a statment
    }
    else if(choice == 'N' || choice == 'n'){
       printf("Program terminated tata bye bye broski!!\n");
    }
    else{
      printf("wrong choice\n");
    }
}