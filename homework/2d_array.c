#include<stdio.h>
#include<stdlib.h>
void enterElements(int*arr,int row,int column){
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&arr[i * column + j]);
    }
  }
}
void displayarray(int*arr,int row , int column){
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d ",arr[i * column + j]);
    }
    printf("\n");
  }
  printf("\n");
}
int main(){
  int row;
  int column;
  int*arr; //array declaration
  printf("Enter the row of a 2d array\n");
  scanf("%d",&row);
  printf("Enter the column of a 2d array\n");
  scanf("%d",&column);
  //array initialization
  arr = (int*)malloc((row*column)*sizeof(int));
  if(arr == NULL){
    // if memory allocation fails!!
    printf("Memory allocation failed!\n");
    exit(0);
  }
  else{
    //if memory allocation succeeds!!
    for(int i=0;i<row; i++){
      for(int j=0;j<column;j++){
        arr[i * column + j]=i+1;
      }
    }
    
    //enter the array element in the 2d array
    printf("Enter the elements in the 2d array\n");
    enterElements(arr,row,column);
    
    //dispplaying the elements in 2d array
    printf("Printing the elements in a 2d array\n");
    displayarray(arr,row,column);
  }
}