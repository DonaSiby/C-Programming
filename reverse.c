/*****************************************
 * File Name   :ReverseNumber
 * Description :Program to  find reverse
 *              of a number.
 * Author      :Dona Siby
 * Version     :2.1
 * Date        :20/06/2021
 ****************************************/
#include<stdio.h>
int main(){
    int number,reverse;
    printf("Enter anumber that you want to reverse :");
    scanf("%d",&number);
    while (number>0)
    {
        reverse=number%10;//To extract the last digit of the number.
        printf("%d",reverse);//To print the reverse number on the screen.
        number=number/10;//To remove the extracted digit and to countinue the process.
    }
   
    return 0;
}
