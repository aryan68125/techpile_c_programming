#include<stdio.h>
#include<stdlib.h>
int main()
{
  //declaring array
  int*arr;
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  
  //initializing array
  arr=(int*)malloc(size*sizeof(int));
  if(arr == NULL){ //if memory allocation failed!
    printf("The memory allocation for the array is failed\n");
    exit(0);
  }
  else{ //if memory allocation is a success!
    for(int i=0;i<size;i++){
      arr[i]=i+1;
    }
    
    //entering values in the array
    for(int i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
    
    printf("printing array in forward order\n");
    for(int i =0 ;i<size;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
    
    printf("printing array in reverse order\n");
    for(int i=size-1;i>=0;i--){
      printf("%d ",arr[i]);
    }
    printf("\n");
  }
}