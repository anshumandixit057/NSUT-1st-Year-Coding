#include <stdio.h>

int main(void) {
    int income;
    printf("Enter your Income:\t");
    scanf("%d", &income);
    if (income <= 250000){
        printf("No tax");
    }
    else if(income>250000 && income<=500000){
        printf("Income tax = 5 percent");
    }
    else if(income>500000 && income<=1000000){
        printf("Income tax = 20 percent");
    }
    else if(income>1000000){
        printf("Income tax = 30 percent");
    }
    return 0;
}