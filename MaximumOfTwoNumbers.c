/*************************************************************************************************
Author:Dona Siby
Title :Find the maximum number.(Conditional operator).
Date  :31/05/2021
*************************************************************************************************/
#include<stdio.h>
int main(){
   int number1,number2,maximumNumber;
  
   printf("Enter the first number :",number1);
   scanf("%d",&number1);
  
   printf("Enter the second number :",number2);
   scanf("%d",&number2);
  
  //Conditional operator.
   maximumNumber=number1>number2?number1:number2;
   printf("The maximum number is  %d",maximumNumber);
   return 0;
}
