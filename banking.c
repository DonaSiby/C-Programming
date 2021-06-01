/*************************************************************************************************
Author:Dona Siby
Title :Find the rate of interest.
Date  :01/06/2021
*************************************************************************************************/
#include<stdio.h>
int main(){
    int years;
    float rateOfInterest=6.0;
    printf("The duration of deposit in years :");
    scanf("%d",&years);
    if (years>=3){
        printf("The rate of interest is %f",rateOfInterest);
    }
    return 0;
}
