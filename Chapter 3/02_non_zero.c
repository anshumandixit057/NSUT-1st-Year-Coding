#include <stdio.h>

int main(void) {
    if(2){
        printf("This is executable!\n");
    }
    if(2.345){
        printf("This is executable!\n");
    }
    if(0){
        printf("This is NOT executable!\n");
        // 0 is not executable
    }
    if('x'){
        printf("This is executable!\n");
    }
    return 0;
}