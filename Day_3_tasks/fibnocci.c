#include<stdio.h>
int main(){
  // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... is the fibnocci series
  int limiter;
  printf("Enter the higher limit of the fibnocci series\n");
  scanf("%d",&limiter);
  int first = 0;
  int second = 1;
  int third =0;
  int sum=0;
  printf("%d\n",first);
  printf("%d\n",second);
  
  //using for loop
//  for(int i=0;i<=limiter;i++)
//    {
//    sum=first+second;
//    third=sum ;
//    first=second;
//    second=third;
//    printf("%d\n",sum);
//  }
  
  //using while loop
  int i=0;
  while(i<limiter)
    {
        sum=first+second;
        third=sum ;
        first=second;
        second=third;
        printf("%d\n",sum);
        i++;
  }
  return 0;
}