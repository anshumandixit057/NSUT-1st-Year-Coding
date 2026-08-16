#include <stdio.h>

int main(void) {
    int i=5;
    printf("The value of i is %d!\n", i);
    i=i+5;
    printf("The value of i is %d!\n", i);
    i++;
    printf("The value of i is %d!\n", i);
    ++i;
    printf("The value of i is %d!\n", i);
    printf("The value of i is %d!\n", ++i);
    printf("The value of i is %d!\n", i++);
    printf("The value of i is %d\n", i);
    i+=4; // i=i+4
     printf("The value of i is %d\n", i);
    return 0;
}