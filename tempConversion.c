/******************************************************
Author:Dona Siby
Title :Convert fahrenheit to celsius.
Date  :05/06/2021
*******************************************************/
#include<stdio.h>
int main(){
    float F;
    float C;

    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&F);

    //To convert fahrenheit to celsius
    C=((F-32)*5)/9;


    printf("The temperature in celsius is %f",C);
    return 0;
}
