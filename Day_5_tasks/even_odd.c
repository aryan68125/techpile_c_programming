#include<stdio.h>
int CheckNumber(int num);
int main()
{
   printf("Enter the number to cheacked even or odd\n");
   int num;
   scanf("%d",&num);
   
   int result = 0;
   result = CheckNumber(num);
   if(result==1){
      printf("The number %d is even\n",num);
   }
   else if(result==0){
     printf("The number %d is odd\n",num);
   }
   else{
     printf("Something went wrong\n");
   }
}

int CheckNumber(int num)
{
  if(num%2==0){
    //if number is even
    return 1;
  }
  else{
//    if number is odd
    return 0 ;
  }
}