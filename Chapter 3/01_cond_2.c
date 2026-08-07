#include <stdio.h>

int main(void){
    
    int age;
    printf("Age :\t");
    scanf(" %d", &age);
    if(age>=18){
        printf("Your Age is greater than 18\n");
    }
    else{
        printf("Your Age is less than 18\n");
    }
    if(age%5==0){
        printf("Your Age is divisible by 5\n");
    }
    else{
        printf("Your age is not dic by 5\n");
    }
    return 0;
}