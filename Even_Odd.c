#include <stdio.h>
#include <stdlib.h>

/**
* @file     main.c
* @version  20.03
* @brief    check whether a number is even or odd
* @details  Write a C program to check whether a number is even or odd using functions.
* @Author   Ziad_Elmekawy
**/

void Even_Odd (int number);

int main()
{
    int num =0 ;
    printf("Enter the number : ");
    scanf("%i" , &num);
    Even_Odd(num);
    return 0;
}

void Even_Odd (int number)
{
    if ((number%2)== 0)
        printf("%i is an even number \n" , number);
    else
        printf("%i is an odd number \n" , number);
}
