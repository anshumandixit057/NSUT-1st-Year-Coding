#include<stdio.h>

int main(void){
    float p, r, t, Intrest;
    printf("Principal :\t");
    scanf(" %f", &p);
    printf("Rate :\t");
    scanf(" %f", &r);
    printf("Time :\t");
    scanf(" %f", &t);
    Intrest = (p * r * t) / 100;
    printf("Simple Intrest:\t%f\n", Intrest );
    printf("Amount :\t%f", p + Intrest );
    return 0;
}