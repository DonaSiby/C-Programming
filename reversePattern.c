/*****************************************
 * File Name   :ReversePattern.c
 * Description :Program to print the following pattern.
 *              *   *   *   *
 *              *   *   *
 *              *   *   
 *              *(to print the above pattern)
 * Author      :Dona Siby
 * Version     :2.1
 * Date        :20/06/2021
 ****************************************/
#include<stdio.h>
int main(){
    int i,number,j;
    printf("Enter the number of times that you want to print the pattern :");
    scanf("%d",&number);
    for (i = 1; i <= number; i++){   //To print the row
        for ( j = number; j >= i; j--)  //To print the column
        {
            printf("\t*");
        }
        
        printf("\n\n");//To move the ccursor to the next line
    }
    
    
    return 0;
}
