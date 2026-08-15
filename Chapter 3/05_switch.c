#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a:");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("You entered 1\n");
        case 2:
        printf("You entered 2\n");// no break so it wil continue till 3
        case 3:
        printf("You entered 3\n");
        break;
        case 4:
        printf("You entered 4\n");
        break;
        default:
        printf("this is default");
        break;
    }
    return 0;
}