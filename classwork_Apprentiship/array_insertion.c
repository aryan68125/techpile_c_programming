#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int*arr;
  printf("Enter the size of the array\n");
  int size;
  scanf("%d",&size);
  
  //initialization of the array
  arr= (int*)malloc(size*sizeof(int));
  
  if(arr == NULL){
    printf("Memory allocation FAILED!\n");
    exit(0);
  }
  else{
    //memory allocation successfull
    
    //saving zeroes in the array as a fail safe
    for(int i=0;i<size;i++){
      arr[i]=0;
    }
    
    //Enter elements in the array
    printf("Enter elements in the array\n");
    EnterELements(arr,0);
    
    printf("Display array\n");
    DisplayArray(arr,0);
    
    
  }
}