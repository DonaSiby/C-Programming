/***************************************************
Author:Dona Siby
Title :Percentage of 5 subjects.
Date  :04/06/2021
****************************************************/
#include<stdio.h>
int main(){
    float average,sum;
    float maths,english,physics,chemistry,biology;
   
    //Maths
    printf("\nMark of maths(out of 100) :",maths);
    scanf("%f",&maths);

    //English
    printf("\nMark of english(out of 100) :",english);
    scanf("%f",&english);

    //Physics
    printf("\nMark of physics(out of 100) :",physics);
    scanf("%f",&physics);

    //Chemistry
    printf("\nMark of chemistry(out of 100) :",chemistry);
    scanf("%f",&chemistry);

    //Biology
    printf("\nMark of biology(out of 100) :",biology);
    scanf("%f",&biology);

    //sum
    sum=maths+english+physics+chemistry+biology;
    printf("\n\nThe total marks obtained by the student (out of 500) is %f",sum);

    //Average
    average=(sum/500)*100;
    printf("\nThe percentage obtained by the student is %f %",average);
    printf("\n\nThank You");
    
    return 0;
}
