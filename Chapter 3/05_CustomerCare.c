#include <stdio.h>

int main(void) {
    int n;
    printf("Welcome to Customer Care\n");
    printf("Press 1 for call support\nPress 2 for billing\nPress 3 for getting account data\n");
    scanf("%d", &n);
    switch (n){
    case 1:
    printf(" Connecting you with our agent...");
        break;
    case 2:
    printf(" Invoice sent to your mail");
    break;
    case 3:
    printf(" Fetching acc data ...\nsent to mail");
    break;
    default:
    printf("Invalid Input");
        break;
    }
    return 0;
}