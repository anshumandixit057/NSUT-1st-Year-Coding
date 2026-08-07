#include<stdio.h>

int main(void){
float celsius;
printf("Enter Temp in celsius:\t");
scanf(" %f", &celsius);
printf("Temp in Fhrenheit:\t%f", (celsius*9/5)+32);
return 0;
}