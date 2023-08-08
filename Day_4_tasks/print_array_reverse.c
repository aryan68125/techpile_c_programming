#include<stdio.h>
#include <stdlib.h>
int main(){
  //declare dynamic array
  int*arr;
  printf("Enter the number of elemnts you want to store in the array\n");
  int number_of_elements;
  scanf("%d",&number_of_elements);
  //initializing array so that we can allocate memory
  //according to the number_of_elements entered in the terminal
  arr=(int*)malloc(number_of_elements*sizeof(int));
  if(arr==NULL){
    //if memory for the dynamic array is not allocated
    printf("Memory not allocated for the array\n");
    exit(0);
  }
  else{
    //if memory for the dynamic array is successfuly allocated
    printf("Memory of the array is successfully allocated\n");
    for(int i=0;i<number_of_elements;i++){
      arr[i]=i+1;
    }
  }
  
  //now we can finally enter the elements inside the array
  printf("Enter the elements in the array\n");
  for(int i=0;i<number_of_elements;i++)
    {
    scanf("%d",&arr[i]);
  }
  
  //print array in forward operation
  printf("Printing the array elements normally\n");
  for(int i=0;i<number_of_elements;i++)
    {
    printf("%d\n",arr[i]);
  }
  
  //printing the array elements in reverse order
  printf("printing the elements of the array in reverse order\n");
  for(int i =number_of_elements-1;i>=0;i--)
    {
    printf("%d\n", arr[i]);
  }
}