/*****************************************************
Author:Dona Siby
Title :Program to determine the youngest of three.
Date  :22/05/2021
******************************************************/
#include<stdio.h>
int main(){
    int age1,age2,age3;

    //First student
    printf("\nEnter the age of first student : ");
    scanf("%d",&age1);

    //Second student
    printf("\nEnter the age of second student : ");
    scanf("%d",&age2);

    //Third student
    printf("\nEnter the age of third student : ");
    scanf("%d",&age3);

    //If else statment to find which student is the youngest.
    if (age1<age2 && age1<age3){
        printf("The first student is the youngest");
    }
    else if(age2<age1 && age2<age3){
        printf("The second student is the youngest");
    }
    else{
        printf("The third student is the youngest");
    }
    return 0;
}
