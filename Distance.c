/**********************************************************
Author:Dona Siby
Title :Distance in kms to m,feet,inches,cms
Date  :03/06/2021
***********************************************************/
#include<stdio.h>
int main(){
    float distance,distM,distFeet,distInches,distCms;
    
    printf("\nEnter the distance between any two cities in kms   ",distance);
    scanf("%f",&distance);

    //To convert km to m
    distM = distance*1000;
    printf("\nThe given distance in meters: %f",distM);
    
    //To convert km to feet
    distFeet = distance*3281;
    printf("\nThe given distance in feet: %f",distFeet);

    //To convert km to inches
    distInches = distance*39370;
    printf("\nThe given distance in inches: %f",distInches);

    //To convert km to centimeters
    distCms = distance*10000;
    printf("\nThe given distance in centimeters: %f",distCms);


    return 0;
}
