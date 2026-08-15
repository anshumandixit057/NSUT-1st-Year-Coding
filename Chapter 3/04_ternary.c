#include <stdio.h>

int main(void) {
    // condition ? expression-if-true : expression-if-false
    int a,b;
    printf("Input 2 no. :\t");
    scanf("%d %d", &a, &b);
    a>b?printf("a is greater\n"):printf("b is greater\n");
    return 0;
}