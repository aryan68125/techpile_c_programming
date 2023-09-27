#include<stdio.h>
void fiblocci(int limiter, int i,int first,int second,int third,int sum){
  if(i<limiter){
    sum = first+second;
    third=sum ;
    first=second;
    second=third;
    printf("%d ",sum);
    fiblocci(limiter,i+1,first,second,third,sum); 
  }
  else{
    return; 
  }
}
int main(){
  printf("Enter the limiter of the series\n");
  int limiter;
  scanf("%d",&limiter);
  int first = 0, second = 1, third = 0,sum = 0;
  fiblocci(limiter,1, first,second,third,sum);
}