#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int checkCoordinates_position(int X, int Y){
  int flag;
  // 0 in origins, 1 in x axis, 2 in y axis, 3 not in x or y or origins
  flag = X == 0 ? (Y == 0 ? 0 : 1) : (Y == 0 ? 2 : 3);
  return flag;
}
int main(){
  printf("Enter X coordinate\n");
  int X,Y;
  scanf("%d",&X);
  printf("Enter Y coordinate\n");
  scanf("%d",&Y);
  
  int flag = checkCoordinates_position(X,Y);
  flag == 0 ? printf("The coordinate is in origins\n") : printf("coordinate is not in origins\n");
  flag == 1 ? printf("The coordinate is in x axis\n") : printf("coordinate is not in x axis\n");
  flag == 2 ? printf("The coordinate is in y axis\n") : printf("coordinate is not in y axis\n");
  
}

int main(){
  printf("Enter X coordinate\n");
  int X,Y;
  scanf("%d",&X);
  printf("Enter Y coordinate\n");
  scanf("%d",&Y);
  
  int flag;
  // 0 in origins, 1 in x axis, 2 in y axis, 3 not in x or y or origins
  flag = X == 0 ? (Y == 0 ? 0 : 1) : (Y == 0 ? 2 : 3);
  return flag;
}