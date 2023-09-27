#include<stdio.h>
#include<stdlib.h>
float sumofElements(int *arr, int size){
  float sum=0;
  for(int i=0;i<size;i++){
    sum += arr[i];
  }
  return sum;
}
float percent(float sum, int size){
  float fsum = (float)sum;
  float percentage = fsum/(size*100);
  return percentage;
}
void check(float percentage){
  if(percentage>=60){
    printf("first division\n");
  }
  else if(percentage>=50){
    printf("second division\n");
  }
  else if(percentage>=40)
  {
    printf("third division\n");
  }
  else{
    printf("FAIL!!\n");
  }
}
int main(){
  printf("Enter the number of subjects marks you want to enter\n");
  int *arr;
  int size ;
  scanf("%d",&size);
  arr = (int*)malloc(size*sizeof(int));
  
  if(arr == NULL){
    printf("Memeory allocation failed\n");
    exit(0);
  }
  else{
    //memory allocation successfull
    for(int i=0;i<size;i++){
      arr[i] = i+1;
    }
    
    //enter elements in the array
    for(int i =0 ; i<size;i++){
      scanf("%d",&arr[i]);
    }
    
    float sum = sumofElements(arr,size);
    float percent_ = percent(sum,size);
    float percentage = percent_*100;
    printf("the percentage of %d subjects is %.2f %%\n",size,percentage);
    check(percentage);
  }
}