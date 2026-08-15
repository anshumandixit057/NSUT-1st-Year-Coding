#include <stdio.h>

int main(void) {
    int n1,n2,n3,n4;
    printf(" Enter 4 seperate no. :\t");
    scanf(" %d %d %d %d" ,&n1,&n2,&n3,&n4);
    if ( n1>n2 && n1>n3 && n1>n4){
        printf("%d is greatest no.", n1);
    }
    else if ( n2>n1 && n2>n3 && n2>n4 ){
        printf("%d is greatest no.", n2);
    }
    else if( n3>n1 && n3>n2 && n3>n4){
        printf("%d is greatest no.", n3);
    }
    else if( n4>n1 && n4>n2 && n4>n3){
        printf("%d is greatest no.", n4);
    }
    return 0;
}