#include<stdio.h>
#include<stdlib.h>
// function to swap item using pointers
void swap(int *xp, int *yp)  
{  
  int temp = *xp;  
  *xp = *yp;  
  *yp = temp;  
}  
//function to sort the function in ascending order
void selectionSortAscending(int array[], int size)  
{  
  int i, j, min_idx;  

  // Loop to iterate on array 
  for (i = 0; i < size-1; i++)  
  {  
    // Here we try to find the min element in array 
    min_idx = i;  
    for (j = i+1; j < size; j++)
    {
      if (array[j] < array[min_idx])  //ascending order sorting logic
        min_idx = j;  
    }
    // Here we interchange the min element with first one  
    swap(&array[min_idx], &array[i]);  
  }  
}  
//function to sort the element in descending order
void selectionSortDescending(int array[], int size){
  int i, j, min_idx;  

  // Loop to iterate on array 
  for (i = 0; i < size-1; i++)  
  {  
    // Here we try to find the min element in array 
    min_idx = i;  
    for (j = i+1; j < size; j++)
    {
      if (array[j] > array[min_idx])  //descending order sorting logic
        min_idx = j;  
    }
    // Here we interchange the min element with first one  
    swap(&array[min_idx], &array[i]);  
  }  
}
/* Display function to print values */
void display(int array[], int size)  
{  
  int i;  
  for (i=0; i < size; i++)
    printf("%d ",array[i]);

  printf("\n");  
}  

// The main function to drive other functions 
int main()  
{  
  int *array;
//  int size = sizeof(array)/sizeof(array[0]);
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  array=(int*)malloc(size*sizeof(int));

  if(array == NULL){
    printf("Memory allocation failed!");
    exit(0);
  }
  else{
    for(int i=0;i<size;i++){
      array[i]=i+1;
    }
    printf("Enter the elements in the array\n");
    for(int i=0;i<size;i++){
      scanf("%d",&array[i]);
    }
    printf("Before sorting: \n");  
    display(array, size);

    selectionSortAscending(array, size); 

    printf("\nAfter sorting in ascending order: \n");  
    display(array, size);
    
    selectionSortDescending(array,size);
    
    printf("\nAfter sorting in descending order: \n");  
    display(array, size);
  }
  return 0;  
}