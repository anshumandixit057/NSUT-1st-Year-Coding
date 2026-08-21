#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the no.:\t");
    scanf("%d", &n);
    for(int i=0; i<=n ;i++){
        if(i==5){
           continue; // continue skip the iteration at i==5
        } // but increment always happen
        printf("%d\n",i);
    }
    return 0;
}