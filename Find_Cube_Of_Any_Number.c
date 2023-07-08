#include <stdio.h>
#include <stdlib.h>

/**
* @file     main.c
* @version  20.03
* @brief    find cube of any number
* @details  Write a C program to find cube of any number using function.
* @Author   Ziad_Elmekawy
**/

int Cube_Of_Number(int number);

int main()
{
    int num = 0 ;
    int res = 0 ;
    printf("************ Calculate the cube of any number ***************\n");
    printf("Please enter your number here : ");
    scanf("%i" , &num);
    res = Cube_Of_Number(num);
    printf("Cube of your number(%i) = %i \n" , num , res);
    return 0;
}

int Cube_Of_Number(int number)
{
    int result =0;
    result = (number * number * number );
    return result ;
}
