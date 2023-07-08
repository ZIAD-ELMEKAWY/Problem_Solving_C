#include <stdio.h>
#include <stdlib.h>

/**
* @file     main.c
* @version  20.03
* @brief    maximum and minimum between two numbers
* @details  Write a C program to find maximum and minimum between two numbers using functions.
* @Author   Ziad_Elmekawy
**/

void Max (double num_1 , double num_2);
void Min (double num_1 , double num_2);

int main()
{
    double num_1 =0 ;
    double num_2 =0 ;
    printf("Enter the first number : ");
    scanf("%lf" , &num_1);
    printf("Enter the second number : ");
    scanf("%lf" , &num_2);
    Max(num_1 , num_2);
    Min(num_1 , num_2);
    return 0;
}

void Max (double num_1 , double num_2)
{
    if (num_1 != num_2)
    {
        if (num_1 >num_2)
        printf("Maximum number = %0.2lf \n" , num_1);
    else
        printf("Maximum number = %0.2lf \n" , num_2);
    }
    else
        printf("Please enter two different numbers \n");
}

void Min (double num_1 , double num_2)
{
    if (num_1 != num_2)
    {
        if (num_1 < num_2)
        printf("Minimum number = %0.2lf \n" , num_1);
    else
        printf("Minimum number = %0.2lf \n" , num_2);
    }
    else
        printf("Please enter two different numbers \n");
}
