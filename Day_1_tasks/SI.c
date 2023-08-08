#include<stdio.h>
int main()
{
  printf("this program calculates the SI\n");
  int P,R,T;
  printf("Enter the Principal amount\n");
  scanf("%d",&P);
  printf("Enter the Rate\n");
  scanf("%d",&R);
  printf("Enter the time\n");
  scanf("%d",&T);
  int SI = (P*R*T)/100;
  printf("The SI is ---> %d",SI);
}