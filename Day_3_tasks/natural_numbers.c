#include<stdio.h>
int main()
{
    printf("Enter the limit for the loop\n");
    int limiter;
    scanf("%d",&limiter);
    for(int i=1;i<=limiter;i++)
      {
      printf("%d\n",i);
    }
}