#include<stdio.h>
#include<stdlib.h>
//function which handles the summision of the elements in the array
int sum(int arr[], int size){
  int sum=0;
  for(int i=0;i<size;i++){
    sum+=arr[i];
  }
  return sum;
}
int main(){
int*arr;
  int size;
printf("Enter size of the array\n");
scanf("%d",&size);

arr=(int*)malloc(size*sizeof(int));
if(arr==NULL){
  printf("Memory allocation failed\n");
  exit(0);
}
 else{
  //if the memory allocation to the array is successfull
  printf("Memory allocation to the array is successfull\n");
  for(int i=0;i<size;i++)
      {
    arr[i]=i+1;
  }

  //entering elements inside the array
  printf("Enter elements in the array\n");
  for(int i=0;i<size;i++)
      {
    scanf("%d",&arr[i]);
  }
  int summission = sum(arr,size);
  printf("summission of elements in the array %d\n", summission);
}

}