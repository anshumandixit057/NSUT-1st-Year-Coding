#include<stdio.h>

int main(void){
    float number;
    printf("Enter a number:\t");
    scanf("%f", &number);
    printf("Square:\t%f\n", number * number);
    printf("Cube:\t%f", number * number * number);
    return 0;
}