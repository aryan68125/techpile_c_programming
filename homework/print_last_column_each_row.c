#include<stdio.h>
#include<stdlib.h>
void enter_elements(int*arr,int row,int column){
  for(int i= 0 ; i<row;i++){
    for(int j = 0; j<column; j++){
      scanf("%d",&arr[i*column+j]);
    }
  }
}
void display_array(int*arr,int row,int column){
  for(int i=0;i<row; i++){
    for(int j=0; j<column; j++){
      printf("%d ",arr[i*column+j]);
    }
    printf("\n");
  }
}
void print_column(int*arr,int row,int column,int column_number){
  for(int i=0;i<row;i++){
    //*(arr+i*column+j)
    printf("%d\n", *(arr+i*column+(column_number-1)));
  }
}
int main(){
  int*arr; ///array declaration
  int row;
  int column;
  int column_number;
  printf("Enter the number of rows in the 2d array\n");
  scanf("%d",&row);
  printf("Enter the number of clumn in the 2d array\n");
  scanf("%d",&column);
  
  //array initialization
  arr = (int*)malloc((row*column)*sizeof(int));
  if( arr == NULL){
    //if the memory allocation fails
    printf("Memeory allocation failed!\n");
    exit(0);
  }
  else{
    //if memory allocation succeeds
    for(int i = 0; i<row;i++){
      for(int j = 0; j<column;j++){
        arr[i*column+j]=i+1;
      }
    }
    
    //enter the elements in the 2d array
    printf("Enter the array elements\n");
    enter_elements(arr, row, column);
    
    //display the array elements
    printf("display the array elements\n");
    display_array(arr,row,column);
    
    printf("Enter the column number which you want to print\n");
    scanf("%d",&column_number);
    printf("printing the column number %d\n",column_number);
    print_column(arr, row, column, column_number);
  }
  free(arr);
}