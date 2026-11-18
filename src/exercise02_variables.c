
/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 02: Variables and Data Types
 *
 * Student Name: Clement Lesuuda
 * Registration Number: ENB211-0013/2025
 */

#include <stdio.h>

int main(void)
{
    int age = 20;
    float temperature = 25.5f;
    double distance = 1250.6789;
    char category = 'A';

    printf("Integer value (Age): %d\n", age);
    printf("Float value (Temperature): %.1f\n", temperature);
    printf("Double value (Distance): %.4lf\n", distance);
    printf("Character value (Category): %c\n", category);

    return 0;
}
