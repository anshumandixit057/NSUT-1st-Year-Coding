#include <stdio.h>

int main(void){
    int age;
    printf("Age :\t");
    scanf(" %d", &age);
    if(age>10){
        printf("Your Age is greater than 10\n");
    }
    if(age%5==0){
        printf("Your Age is divisible by 5");
    }
    return 0;
}