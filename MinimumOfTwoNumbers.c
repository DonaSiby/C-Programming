/*******************************************************************
Author:Dona Siby
Title :Program to find maximum of two numbers.(Conditional operator).
Date  :31/05/2021
********************************************************************/
#include<stdio.h>
int main(){
   int number1,number2,minimumNumber;
   printf("Enter the first number :",number1);
   scanf("%d",&number1);
  
   printf("Enter the second number :",number2);
   scanf("%d",&number2);
  
   minimumNumber=number1<number2?number1:number2;
   printf("The smallest number is  %d",minimumNumber);
   return 0;
}

