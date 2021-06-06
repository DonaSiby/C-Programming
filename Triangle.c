/******************************************************
Author:Dona Siby
Title :Program to check whether the given triangle
       is valid or not.
Date  :06/06/2021
*******************************************************/
#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum;

    printf("\nEnter the first angle : ");
    scanf("%d",&angle1);


    printf("\nEnter the second angle : ");
    scanf("%d",&angle2);

    
    printf("\nEnter the third angle : ");
    scanf("%d",&angle3);

    sum=angle1+angle2+angle3;
    if (sum==180){
        printf("\nThe given triangle is valid");
    }
    else{
        printf("\nThe given triangle is not valid");
    }
    return 0;
}
