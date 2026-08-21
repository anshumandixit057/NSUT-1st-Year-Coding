#include <stdio.h>

int main(void) {
    int i=0;
    while(i<7){
        printf("Happy Birthday!!\n");
        if(i==3){
            break;
        }
        i=i+1; // or i++
    }
    
    return 0;
}