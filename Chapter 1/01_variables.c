#include <stdio.h>

int main(){
    int a=4;
    int age=18;
    float rating=9.5;
    char tier='S'; // char is always written in 'x' assinged by %c in printf
    printf("The answer is %d .\n", a); // \n to next line
    printf("My age is %d. \n", age);
    printf("My rating is %f \n", rating);
    printf("My account status is tier %c.\n", tier);
    return 0;
}