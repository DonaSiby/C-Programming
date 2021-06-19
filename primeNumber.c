/*****************************************
 * File Name   :Decimal To Binary
 * Description :Program to check the given number is prime or not.
 * Author      :Dona Siby
 * Version     :2.1
 * Date        :18/06/2021
 ****************************************/
#include<stdio.h>
int main(){
    int number,i;
    printf("\nEnter a number to find weather the given number is prime or not:");
    scanf("%d",&number);
    for (i = 2; i <= number/2; i++){
        if (number%i==0){
            break;
        }
    }
        if (i>number/2){
            printf("\nThe given number is a prime number");
        }
        else{
            printf("\nThe given number is not a prime number");
        }
    
    return 0;
}
