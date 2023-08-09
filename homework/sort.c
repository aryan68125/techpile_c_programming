#include<stdio.h>
#include<stdlib.h>
void inter_elements(int*arr, int size){
  for(int i = 0; i<size;i++){
    scanf("%d",&arr[i]);
  }
}
void display_elements(int*arr, int size){
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
//this function will swap the elements
void swap_(int *arr1, int *arr2){
  int temp;
  temp = *arr1;
  *arr1 = *arr2;
  *arr2 = temp;
}
//This function will sort the elements in ascending order till the given index value
void sort(int*arr, int index){
  for(int i=0;i<index;i++){
    for(int j=i+1; j<index; j++)
    if (arr[i]>arr[j]){
      swap_(&arr[i],&arr[j]);
    }
  }
}
int main(){
  int*arr; //array declaration
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  
  //array initialization
  arr = (int*)malloc(size*sizeof(int));
  if(arr == NULL){
    //if memory allocation fails
    printf("Memory allocation failed!\n");
    exit(0);
  }
  else{
    //if memory allocation is a success
    for(int i=0;i<size;i++){
      arr[i]=i+1;
    }
    
    //entering the elements in the array
    printf("Enter the elements in the array\n");
    inter_elements(arr,size);
    
    //printing the array elements
    printf("Printing the array elements\n");
    display_elements(arr, size);
    
    //sort the array in ascending order till the given index
    printf("Enter the index till where you want to sort the array\n");
    int index ;
    scanf("%d", &index);
    printf("sorting the array\n");
    sort(arr, index);
    display_elements(arr, size);
  }
}