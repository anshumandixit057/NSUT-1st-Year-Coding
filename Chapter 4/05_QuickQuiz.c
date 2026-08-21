#include <stdio.h>

int main(void) {
    // 1st n natural no. by for
    int n;
    printf("Enter the no.:\t");
    scanf("%d", &n);
    for ( int i=1;i<=n;i++) {
        printf("%d\n", i);
    }
    return 0;
}