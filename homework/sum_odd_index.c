#include<stdio.h>
#include<stdlib.h>
//this program calculates the sum of elements in the odd index in the array
int sumoddindex(int*arr, int size);
int sumoddindex(int*arr,int size){
  int sum=0;
  for(int i=0;i<size;i++){
    if(i%2 != 0)
      {
      sum=sum+arr[i];
    }
  }
  return sum;
}
void display(int*arr, int size){
  for(int i = 0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main()
{
   int*arr; //array declaration
   int size;
   printf("Enter the size of array\n");
   scanf("%d",&size);
   //array initialization
   arr=(int*)malloc(size*sizeof(int));
   if(arr == NULL){ //if memory allocation fails
     printf("Memory allocation Failed\n");
     exit(0);
   }
   else{ //if memory allocation is a success
     for(int i=0;i<size;i++){
       arr[i]=i+1;
     }
     
     printf("Enter the elements inside the array\n");
     for(int i = 0 ; i<size;i++){
       scanf("%d",&arr[i]);
     }
     
     //display the array
     display(arr,size);
     
     //calcualte the sum of add index and display it
     int sum = sumoddindex(arr,size);
     printf("The sum of odd index elements in the array = %d\n",sum);
   }
}