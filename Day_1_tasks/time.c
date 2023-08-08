#include<stdio.h>
int main()
{
  printf("This program converts the seconds into hours , minutes, seconds\n");
  printf("Input seconds: ");
  int sec, h, m, s;
  scanf("%d", &sec);

  h = (sec/3600); 

  m = (sec -(3600*h))/60;

  s = (sec -(3600*h)-(m*60));

  printf("H:M:S - %d:%d:%d\n",h,m,s);

  return 0;

}
