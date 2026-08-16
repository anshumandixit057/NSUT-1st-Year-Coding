#include <stdio.h>

int main(void) {
    //Quick Quiz: Write a program to 
    //print first ‘n’ natural number using do-while loop
    int n,i;
    i=1;
    printf("Enter the no.:\t");
    scanf("%d", &n);
    do{
        printf(" %d\n", i);
        i++;
    } while(i<=n);
    return 0;
}