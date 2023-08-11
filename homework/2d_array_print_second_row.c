#include<stdio.h>
#include<stdlib.h>
void enter_array_elements(int*arr,int row,int column){
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&arr[i*column+j]);
    }
  }
}
void display_array(int*arr, int row, int column){
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d ",arr[i*column+j]);
    }
    printf("\n");
  }
}
void print_row(int*arr, int row, int column, int row_number){
  int column_number=0;
    for(int j=0;j<column;j++){
      //printing the row entered by the user
      //*(arr+(row_number-1)*column+j)
      /**
       * you need to modify the normal array accessing code a little bit because
       * row number starts from 0 hence we need to actually subtract 1 otherwise
       * when accessing the last row you may go out of bounds
       * hence put row_number-1 inside the *(arr+(row_number-1)*column+j) code
       */
      printf("%d ", *(arr+(row_number-1)*column+j));
    }
}
int main(){
  int *arr; //array declaration
  int row;
  int column;
  int row_number;
  printf("Enter the row for the 2d array\n");
  scanf("%d",&row);
  printf("Enter the column for the 2d array\n");
  scanf("%d",&column);
  
  //initialization of the 2d array
  arr = (int*)malloc((row*column)*sizeof(int));
  if(arr == NULL){
    //if the memory allocation fails!!
    printf("Memeory allocation Failed!!\n");
    exit(0);
  }
  else{
    //if the memory allocation succeeds!
    for(int i =0; i<row; i++){
      for(int j=0;j<column;j++){
        arr[i*column+j]=i+1;
      }
    }
    
    //enter the array elements in the 2d array
    printf("Enter the array elements\n");
    enter_array_elements(arr,row,column);
    
    //print the array elements
    printf("Displaying the 2d array\n");
    display_array(arr,row,column);
    
    //search the element in the array
    printf("Enter row which you want to print in the 2d array\n");
    scanf("%d",&row_number);
    print_row(arr, row, column, row_number);
  }
  free(arr);
}