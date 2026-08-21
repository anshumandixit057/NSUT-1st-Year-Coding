#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the no.:\t");
    scanf("%d", &n);
    printf("Mult in reverse order of %d:\n", n);
    for(int i=10; i; i--){
        
        printf("%d x %d = %d\n", n,i,n*i);
        
    }
    return 0;
}