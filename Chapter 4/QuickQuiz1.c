#include <stdio.h>

int main(void) {
    //Write a program to print natural numbers from 10 to 20 
    //when initial loop counter is initialized to 0.
    int i=0; // can be float as well
    while (i<=20){
        if(i>=10){
            printf("Number is %d!\n", i);
        }
        i++;
    }
    
    return 0;
}