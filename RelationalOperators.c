/*************************************************************************************************
Author:Dona Siby
Title :Relational Operators.
Date  :22/05/2021
*************************************************************************************************/
#include<stdio.h>
int main(){
    int number1, number2, number3;
    printf("Enter the first digit=");
    scanf("%d",&number1);

    printf("Enter the second digit=");
    scanf("%d",&number2);

    printf("Enter the third digit=");
    scanf("%d",&number3);

    /*TRUE is represented as 1 FALSE as 0 */
    printf("1: TRUE\t 0:FALSE\n");

    //Equal to (==)
    printf("%d == %d is %d \n", number1, number2, number1 == number2);
    printf("%d == %d is %d \n", number1, number3, number1 == number3);

    //Greater Than (>)
    printf("%d > %d is %d \n", number1, number2, number1> number2);
    printf("%d > %d is %d \n", number1, number3, number1 > number3);

    //Less Than (<)
    printf("%d < %d is %d \n", number1, number2, number1 < number2);
    printf("%d < %d is %d \n", number1, number3, number1 < number3);

    //Not Equal (!=)
    printf("%d != %d is %d \n", number1, number2, number1 != number2);
    printf("%d != %d is %d \n", number1, number3, number1 != number3);

    //Greater Than or Equal to (>=)
    printf("%d >= %d is %d \n", number1, number2, number1 >= number2);
    printf("%d >= %d is %d \n", number1, number3, number1 >= number3);

    //Less Than or Equal to (<=)
    printf("%d <= %d is %d \n", number1, number2, number1 <= number2);
    printf("%d <= %d is %d \n", number1, number3, number1 <= number3);
    return 0;
}
