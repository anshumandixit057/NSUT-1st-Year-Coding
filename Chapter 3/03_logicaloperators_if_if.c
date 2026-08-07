#include <stdio.h>

int main(void) {
    int a ,b;
    printf("Enter a & b:\t");
    scanf("%d %d", &a ,&b);
    if(a&&b !=0){
        printf("The output is true\n");
    }
    if(a!=0){
        if(b!=0){
            printf("The output is true\t(here computer only reaches 2nd 'if' , if 1st 'if' is true)");
        }
    }
    return 0;
}