#include <stdio.h>

int main(void) {
    int n;
    int sum=0;
    printf("To calc the sum of the no in the mult table of given no\n");
    printf("Enter the no.:\t");
    scanf("%d", &n);
    printf("sum of multiples of %d:\n",n);
    for(int i=1;i;i++){
        if(i==11){
            break;
        }
        int s= n*i;
        printf(" %d x %d = %d \n", n , i, s);
        sum+=s;
    }
    printf("Sum : %d", sum);


    return 0;
}