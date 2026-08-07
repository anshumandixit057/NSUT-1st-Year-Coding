#include <stdio.h>

int main(){
    int number;
    float price;
    char grade;
printf("iq : ");
scanf("%d", &number); 
printf("accuracy :"); // integer
scanf("%f", &price);   // decimal number
printf("fav tier :");
scanf(" %c", &grade);  // one character
printf("I have %d IQ , with an accuracy of %f . my fav tier is %c", number, price, grade);
    return 0;
}