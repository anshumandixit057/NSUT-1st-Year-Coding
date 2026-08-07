#include<stdio.h>

int main(void){
    int day , days, year, week, month ;
    printf("Enter number of days:\t");
    scanf(" %d", &days);
    year = days/365;
    day = days % 365;
    month = day/30;
    week = day/month;
    printf("Time Left : ");
    printf(" %d Year", year);
    printf(" %d Month", month);
    printf(" %d Week", week);
    printf(" %d Days", day % 7);
    return 0;
}