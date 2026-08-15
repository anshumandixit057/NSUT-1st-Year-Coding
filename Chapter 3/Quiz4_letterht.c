#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter the letter:\t");
    scanf(" %c", &ch);

    if(ch >= 'a' && ch <= 'z' ){
        printf("Letter is lowercase!");
    }
    else{
        printf("Letter is not lowercase!");
    }
    return 0;
}