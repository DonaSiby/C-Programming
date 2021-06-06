/******************************************************
Author:Dona Siby
Title :Program to find the area and perimeter of triangle.
Date  :04/06/2021
*******************************************************/
#include<stdio.h>
int main(){
    float side1,side2,side3;
    float area,perimeter;

    //First side.
    printf("\nEnter the length of first side (base of the tringle) :");
    scanf("%f",&side1);

    //Second side.
    printf("\nEnter the length of second side (height of the triangle) :");
    scanf("%f",&side2);

    //Third side.
    printf("\nEnter the length of third side :");
    scanf("%f",&side3);

    //Area of the triangle.
    area=0.5*side1*side2;
    printf("\nThe area of the given triangle is %f",area);

    //Perimeter of the triangle.
    perimeter=side1+side2+side3;
    printf("\nThe perimeter of the given triangle is %f",perimeter);

    return 0;
}
