/*************************************************************************************************
Author:Dona Siby
Title :Find the sum of two numbers.
Date  :21/05/2021
*************************************************************************************************/
#include<stdio.h>
int main(){
    int number1, number2,sum;
    printf("\nEnter any two digits:");
    printf("\nEnter the first digit=");
    scanf("%d",&number1);
    printf("\nEnter the second digit=");
    scanf("%d",&number2);
    sum=number1 +number2;
    printf("\nSum of two numbers = %d",sum);
    return 0;
}
