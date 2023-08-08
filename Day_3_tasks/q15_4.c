#include<stdio.h>
int main(){
  /*
  *
  **
  ****
  * */
  int limiter;
  printf("Enter the upper limit of the triangle\n");
  scanf("%d",&limiter);
  printf("Output triangle\n");
  for(int i=1;i<limiter;i++)
    {
    for(int j=1;j<=i;j++)
      {
        printf("%d ",i*j);
    }
    printf("\n");
  }
}