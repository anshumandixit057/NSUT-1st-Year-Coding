#include <stdio.h>

int main(void) {
    int i=1;
    while (i<=10)
    {
     printf("The value of i is %d!\n",i);
     i++; // can also use i+=2; 
     // so output will 1 3 5 7 9
    }   
    return 0;
}