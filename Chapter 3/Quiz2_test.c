#include <stdio.h>

int main(void) {
    int m1 , m2 ,m3;
    printf("Enter marks of all 3 subjects:\t");
    scanf(" %d %d %d", &m1 , &m2 ,&m3);
    int total ;
    total = ((m1 + m2 + m3)/300)*100;
    if (total >= 40 && m1>=33 && m2>=33 && m3>=33 ){
        printf("You have Passed!!");
    }
    else{
        printf("You Failed!!");
    }
    return 0;
}