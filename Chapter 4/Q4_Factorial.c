#include <stdio.h>

int main(void) {
    int n,x=1;
    printf("Enter the no.:\t");
    scanf("%d", &n);
    printf("%d! = ",n);
    // nice ques
    for(int i=n;i>0;i--){
        x*=i;
        printf("%d",i);
        if(i>1){
            printf("x");
        }
        else{
            printf("=");
        }
        
    }
    printf(" %d\n", x);
    printf(" %d! = %d",n, x);
    return 0;
}