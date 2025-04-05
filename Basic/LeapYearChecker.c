/*
File Name: LeapYearChecker.c
Purpose: Check if a year is a leap year.
*/

#include <stdio.h>

int main() {
    int year = 2024;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
