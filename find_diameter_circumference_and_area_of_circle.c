#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* @file     main.c
* @version  20.03
* @brief    find diameter, circumference and area of circle
* @details  Write a C program to find diameter, circumference and area of circle using functions.
* @Author   Ziad_Elmekawy
**/

void Diameter (float radius);
void Circumference (float radius);
void Area (float radius);

int main()
{
    float rad =0 ;
    printf("Enter the radius of circle : ");
    scanf("%f" , &rad);
    Diameter (rad);
    Circumference(rad);
    Area(rad);
    return 0;
}

void Diameter (float radius)
{
    printf("Diameter = %0.2f \n" , (2*radius));
}

void Circumference (float radius)
{
    printf("Circumference = %0.2f \n" , (2*3.14*radius));
}

void Area (float radius)
{
    printf("Area = %0.2f \n" , (radius*radius*3.14));
}
