#include <stdio.h>

int main(void) {
    int year;
    printf("Enter the Year:\t");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || year%400==0){
        printf("Its a Leap Year!");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}