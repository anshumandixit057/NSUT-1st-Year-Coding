#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the no.:\t");
    scanf("%d", &n);
    for(int i=n; i ; i--){
        printf("%d\n", i);
    }

    return 0;
}