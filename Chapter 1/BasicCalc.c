#include <stdio.h>

int main(void) {
    float a, b;

    printf("Enter two integers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %f\n", a + b);
    printf("Difference = %f\n", a - b);
    printf("Product = %f \n", a * b);
    printf("Quotient = %f", a / b);

    return 0;
}