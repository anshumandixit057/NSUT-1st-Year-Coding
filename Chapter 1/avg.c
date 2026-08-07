#include<stdio.h>

int main(void){
    float a, b, c;
    printf("Input 3 no.:\t");
    scanf(" %f %f %f", &a, &b, &c);
    printf("Avg of 3 numbers :\t%f", (a+b+c) / 3);
    return 0;
}