#include<stdio.h>

int main(void){
    float length , bredth;
    printf("Input the length and bredth:\t");
    scanf(" %f %f", &length , &bredth);
    printf("Perimeter:\t%f\n", 2 *(length + bredth));
    printf("Area:\t%f", length * bredth);
    return 0;
}