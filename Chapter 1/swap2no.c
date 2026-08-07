#include<stdio.h>

int main(void){
    int a, b, temp;
    printf("Input 2 no. a & b :\t");
    scanf(" %d %d", &a , &b);
    temp = a;
    a = b;
    b = temp;
    printf("Numbers after swapping :\n");
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;

}