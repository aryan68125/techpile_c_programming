#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//calculate the average
float average(int arr[],int size){
  int sum=0;
  for(int i=0;i<size;i++){
    sum+=arr[i];
  }
  float average = (float)sum/(float)size;
  return average;
}
//array elements input
void inputElements(int arr[], int i, int size){
  if(i==size){
    return;
  }
  scanf("%d", &arr[i]);
  inputElements(arr, i+1, size);
}
//array display
void display(int arr[], int i, int size){
  if(i==size){
    return;
  }
  printf("%d ", arr[i]);
  display(arr, i+1, size);
}
//free the memory allocated to the array after average calculation is complete
void free_memory(int arr[]){
  free(arr);
}
int main(){
  int *arr ; //declaring array
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  
  //initializing the array
  arr=(int*)malloc(size*sizeof(int));
  
  if(arr == NULL){
    printf("Memory allocation failed!\n");
    exit(0);
  }
  else{
    //if memory allocation is a success
    for(int i=0;i<size;i++){
      arr[i]=0;
    }
    
    //enter the array elements
    printf("Enter the array elements\n");
    inputElements(arr, 0, size);
    
    //display the array elements
    printf("displaying the array\n");
    display(arr, 0, size);
    printf("\n");
    
    //average of the numbers in the array
    float average_ = average(arr, size);
    printf("The average is = %.3f",average_);
    
    //free the memory allocated to the array
    free_memory(arr);
  }
}