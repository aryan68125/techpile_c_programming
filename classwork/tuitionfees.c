//total fee = tution fee + exam fee + hostel fee + employee empowerment fee + 10000
#include<stdio.h>
int main()
{
  printf("enter your tuition fees\n");
  int tuition_fees;
  scanf("%d",&tuition_fees);
  int examfee=(2.0/100)*tuition_fees;
  int hostel_fees = (5.0/100)*tuition_fees;
  int employee_empowerment_fees = (10.0/100)*tuition_fees;
  int total_fees = tuition_fees + examfee + hostel_fees + employee_empowerment_fees + 10000;
  printf("Total_fees = %d",total_fees);
}