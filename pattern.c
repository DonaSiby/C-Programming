/*****************************************
 * File Name   :Pattern.c
 * Description :Program to print the following pattern.
 *              *   
 *              *   *
 *              *   *   *
 *              *   *   *   *(to print the above pattern)
 * Author      :Dona Siby
 * Version     :2.1
 * Date        :20/06/2021
 ****************************************/
#include<stdio.h>
int main(){
    int i,number,j;
    printf("Enter the number of times that you want to print the pattern :");
    scanf("%d",&number);
    for (i = 1; i <= number; i++){  //To print row.
        for ( j = 1; j <= i; j++)   //To print column.
        {
            printf("\t*");
        }
        
        printf("\n\n");//To move thecursor to the next line.
    }
    
    
    return 0;
}
