#include<stdio.h>

int main(void){
    int a,b;
    a = 7 , b = 3;
    printf("The remainder when a/b is %d", a%b);
    return 0;
    // % → cannot be applied on float
    // % → sign is same as of numerator (-5%2=-1)
    // ^ this is not power (exponential) func , c dont habe any we use pow as power funcn in <math.h>
}