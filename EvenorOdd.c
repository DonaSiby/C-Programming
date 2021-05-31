/*************************************************************************************************
Author:Dona Siby
Title :Even or odd.(Conditional operator).
Date  :31/05/2021
*************************************************************************************************/
#include<stdio.h>
int main(){
   int number;
   printf("Enter the number :",number);
   scanf("%d",&number);
  
   //conditional operator.
   number%2==0?printf("The number is Even"):printf("The number is Odd");
   return 0;
}
