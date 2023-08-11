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
void search_array(int*arr, int row, int column, int number){
  int row_number=0,column_number=0,flag=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      //arr[i*column +j]
      if(number == *(arr+i*column+j)){
        row_number=i;
        column_number=j;
        flag=1;
      }
      //never put an else block inside the for loop otherwise it will overpower the if block
      //and it will not return the searched value and will always return a false negative value.
    }
  }
  if(flag == 0){
    printf("%d is not present in the 2d array\n",number);
  }
  else{
    printf("%d is present in row %d and column %d in the 2d array\n", number,row_number,column_number);
  }
}
int main(){
  int *arr; //array declaration
  int row;
  int column;
  int number;
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
    printf("Enter the value that you want to search in the array\n");
    scanf("%d",&number);
    search_array(arr, row, column, number);
  }
  
}