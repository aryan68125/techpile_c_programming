#include<stdio.h>
int main()
{
  printf("Enter the percentage\n");
  int percentage;
  scanf("%d",&percentage);
  if(90<=percentage)
    {
    printf("A Grade\n");
  }
  else if(75<=percentage && percentage<90)
    {
    printf("B Grade\n");
  }
    else if(61<=percentage && percentage<75)
    {
    printf("C Grade\n");
  }
    else if(46<=percentage && percentage<60)
    {
    printf("D Grade\n");
  }
    else if(36<=percentage && percentage<45)
    {
    printf("E Grade\n");
  }
  else
    {
    printf("Fail\n");
  }
}