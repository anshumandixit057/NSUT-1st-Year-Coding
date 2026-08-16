#include <stdio.h>

int main(void) {
    int i=50;
    printf("Value of i = %d!\n", i);
    --i;
    printf("Value of i = %d!\n", i);
    i--;
    printf("Value of i = %d!\n", i);
    printf("Value of i = %d!\n", --i);
    printf("Value of i = %d!\n", i--);
    printf("Value of i = %d!\n", i);
    i-=10;
    printf("Value of i = %d!\n", i);
    i/=6; // i=i/6
    printf("Value of i = %d!\n", i);
    i*=9;
    printf("Value of i = %d!\n", i);
    i%=5;
    printf("Value of i = %d!\n", i);

    return 0;
}