#include<stdio.h>

int main(void){
    int days, year, weeks ;
    printf("Number of Days:\t");
    scanf(" %d", &days);
    year = days / 365;
    printf("Time left : %d year", year);
    weeks = (days - ( year * 365 ) ) / 7;
    printf(" %d weeks", weeks );
    printf(" %d days", (days - ( year * 365 ) ) - (weeks * 7) );
    return 0;
}