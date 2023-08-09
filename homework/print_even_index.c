#include<stdio.h>
#include<stdlib.h>
void displayarray(int*arr, int size){
  for(int i = 0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void displayeven_index(int*arr,int size){
  for(int i = 0;i<size;i++)
{
    if(i%2 == 0){
      printf("%d ",arr[i]); 
    }
  }
  printf("\n");
}
int main(){
  int*arr; //declaration of array
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  
  //initialization of array
  arr=(int*)malloc(size*sizeof(int));
  if(arr == NULL){
    //if memory allocation for the array fails
    printf("Memeory allocation for the array Failed!!\n");
    exit(0);
  }
  else{
    //if the memory allocation for the array is a success
    for(int i = 0;i<size;i++){
      arr[i]=i+1;
    }
    
    //enter the array elements
    for(int i = 0 ; i<size;i++){
      scanf("%d",&arr[i]);
    }
    
    //display the array
    printf("printing the array\n");
    displayarray(arr,size);
    
    printf("printing the even index elements in the array\n");
    displayeven_index(arr,size);
  }
}