#include <stdio.h>

int main(void) {
    char Name[30];
    int age;
    printf("Whats your Name ??\t");
    scanf("%s", &Name);
    printf("Whats your age ??\t");
    scanf("%d", &age);
    printf("Hi %s, you are %d years old", Name, age);
    return 0;
}