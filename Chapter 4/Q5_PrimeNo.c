#include <stdio.h>
// IMPORTANT
int main(void) {
    int n;
    int not_prime=0;// we initialize it to 0
    // bcz without it C assume it to be garbage value
    printf("Enter the no. :\t");
    scanf("%d", &n);
    for(int i=2; i<n ; i++){
        if(n%i==0 && n!=2){
            not_prime=1;
            break;
        }
    }
    if (not_prime==1){
        printf("The no is not Prime!");
    }
    else{
        printf("The no is Prime!");
    }
    return 0;
}