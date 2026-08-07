#include <stdio.h>

int main(){
    printf("Whats your age ??\t");
    char age[50]; // Creates a text container that holds up to 50 characters
    scanf("%s", age); // Reads whatever they type (numbers or letters)
    printf("Your age is %s\n", age); 
    return 0;
}