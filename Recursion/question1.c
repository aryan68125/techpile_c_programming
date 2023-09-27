#include<stdio.h>
int fun(){
  static int a=16; // static only get initialized only once
  return a--;
}
int main(){
  //    initialization //condition //increament
  //for(fun();fun();fun())
  for(fun();fun();fun()){
    printf("%d\n",fun());
  }
}