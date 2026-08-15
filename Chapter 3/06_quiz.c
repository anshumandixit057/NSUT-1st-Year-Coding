#include <stdio.h>

int main(void) {
    int n;
    printf("Enter your marks(out of 100):\t");
    scanf("%d", &n);

    if(n>=90 && n<=100){
        printf("Your grade is A");
    }
    else if (n>=80 && n<90)
    {
        printf("Your grade is B");
    }
    else if(n>=70 && n<80){
        printf("Your grade is c");
    }
    else if (n>=60 && n<70){
        printf("Your grade is D");
    }
    else if (n>=50 && n<60){
        printf("Your grade is E");
    }
    else{
        printf(" Your grade is F");
    }
    return 0;
}