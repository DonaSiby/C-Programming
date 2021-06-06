/*****************************************************
Author:Dona Siby
Title :Program to print the trigonometric ratios 
       of an angle.
Date  :06/06/2021
******************************************************/
#include<math.h>
#include<stdio.h>
int main(){

int angle;
double a,b,c;

printf("\nEnter the value of an angle : ");
scanf("%d",&angle); 

//sin of angle
a=sin(angle);
printf("\nThe sin of given angle is %f",a);

//cos of angle
b=cos(angle);
printf("\nThe cos of given angle is %f",b);

//tan of angle
c=tan(angle);
printf("\nThe tan of given angle is %f",c);

return 0;
}

