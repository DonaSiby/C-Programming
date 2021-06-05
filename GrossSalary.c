/***************************************************
Author:Dona Siby
Title :Gross Salary.
Date  :22/05/2021
***************************************************/
#include<stdio.h>
int main(){
    float basicSalary;
    float da,hra;
    float grossSalary;

    printf("\nEnter the basic salary:");
    scanf("%f",&basicSalary);

    printf("\nEnter the Dearness Allowance:");
    scanf("%f",&da);

    printf("\nEnter the House Rent Allowance:");
    scanf("%f",&hra);
   
    //Dearness Allowance
    da = basicSalary*(da/100);

    //House Rent Allowance
    hra = basicSalary*(hra/100);

    //Gross Salary
    grossSalary = basicSalary + da + hra;

    printf("\n\nSalary Statement");
    printf("\nBasic Salary=%f",basicSalary);
    printf("\nDearness Allowance=%f",da);
    printf("\nHouse Rent Allowance=%f",hra);
    printf("\nGross Salary of the person:%f",grossSalary);
    return 0;
}
