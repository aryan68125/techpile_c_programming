#include<stdlib.h>
#include<stdio.h>
/*
wap to print the series :
1. 10 9 8 7 6 5 4
2. 1 3 5 7 9 11 13
3. 2 6 10 14 18 22
4. 0 5 10 15 20 25 30
5. 20 10 5 2 1
* */
int main(){
  printf("first qoestion\n");

  int i=10;
  while(i>=4){
    printf("%d ",i);
    //    i++;
    i=i-1;
  }
  printf("\n");
  
  printf("second qoestion\n");
  int j = 1;
  while(j<=13){
    if(j%2!=0){
      printf("%d ",j );
    }
    j++;
  }
  printf("\n");
  
  printf("third question\n");
  int l = 1;
  while(l<=11){
    printf("%d ",l*2);
    l = l+2;
  }
  printf("\n");
  
  printf("fourth question\n");
  int m = 0;
  while(m<=6){
    printf("%d ",m*5);
    m = m+1;
  }
  printf("\n");
  
  printf("fifth question\n");
  int n = 20;
  while(n>=1){
    printf("%d ",n);
    n = n/2;
  }
  printf("\n");
}