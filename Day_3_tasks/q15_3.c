#include<stdio.h>
int main(){
/*
****
**
*
* */
  printf("Enter the upper limit of the triangle\n");
  int limiter;
  scanf("%d",&limiter);
  for(int i=limiter; i>0;i--)
    {
    for(int j=i;j>0;j--)
      {
      printf("%d",i);
    }
    printf("\n");
  }
}