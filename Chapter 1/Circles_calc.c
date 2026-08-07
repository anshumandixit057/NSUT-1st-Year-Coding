#include<stdio.h>

int main(void){
    float radius;
    float pi=3.1428;
    printf("Radius:\t");
    scanf(" %f", &radius);
    printf("Diameter: %f\n", 2*radius);
    printf("Circumference: %f\n", 2*pi*radius);
    printf("Area: %f\n", pi*radius*radius);
    return 0;
}