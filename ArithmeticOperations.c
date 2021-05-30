/*************************************************************************************************
Author:Dona Siby
Title :Arithmetic Operations.
Date  :22/05/2021
*************************************************************************************************/
#include<stdio.h>
int main(){
    int number1, number2;
    printf("Enter the first digit=");
    scanf("%d",&number1);
    printf("\nEnter the second digit=");
    scanf("%d",&number2);
    printf("Number 1:%d\tNumber2:%d\n",number1,number2);
    //Addition of two numbers.
    printf("Addition:%d\n",number1+number2);

    //Substraction of two numbers.
    printf("Subtraction:%d\n",number1-number2);

    //Multiplication of two numbers.
    printf("Multiplication:%d\n",number1*number2);

    //Division of two numbers.
    printf("Division:%d\n",number1/number2);
    printf("Reminder:%d\n",number1%number2);
    return 0;
}
