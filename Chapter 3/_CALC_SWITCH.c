#include <stdio.h>

int main(void) {
    float n1 , n2 ;
    char op ;
    printf("Welcome to Calc:");
    printf("Enter the input :\t");
    scanf("%f %c %f", &n1 , &op , &n2);
    switch(op){
        case '+':
        printf("%.2f", n1 + n2);
        break;
        case '-':
        printf("%.2f", n1 - n2);
        break;
        case '*':
        printf("%.2f", n1 * n2);
        break;
        case '/':
        printf("%.2f", n1/n2);
        break;
        default:
        printf("Enter valid operators +,-,*,/ only");

    }
    return 0;
}