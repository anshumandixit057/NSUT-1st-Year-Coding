#include <stdio.h>

int main(void) {
    int a,b; // always 1=true,0=false
     a=0,b=0;
    printf(" CASE I >>\ta=0,b=0\n");
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
printf(" The value of not a and b is %d\n", !(a&&b));
     a=0,b=1;
    printf("CASE II >>\ta=0,b=1\n");
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
printf(" The value of not a and b is %d\n", !(a&&b));
     a=1,b=0;
    printf("CASE III >>\ta=1,b=0\n");
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
printf(" The value of not a and b is %d\n", !(a&&b));
     a=1,b=1;
    printf("CASE IV >>\ta=1,b=1\n");
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf(" The value of not a and b is %d\n", !(a&&b));
    return 0;
}