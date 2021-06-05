/********************************************
Author:Dona Siby
Title :Division of two numbers
Date  :22/05/2021
*********************************************/
#include<stdio.h>
int main(){
    int number1, number2;
    int div;
    printf("Enter the first number : ");
    scanf("%d",&number1);
    printf("\nEnter the second number :");
    scanf("%d",&number2);
    div=number1/number2;
    printf("The Quotient of the given two digits is: %d",div);
    return 0;
}
