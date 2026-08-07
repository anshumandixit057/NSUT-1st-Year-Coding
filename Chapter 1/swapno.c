#include <stdio.h>

int main() {
    // 1. Declare three integer variables
    int num1, num2, temp;

    // 2. Take the first number as input from the user
    printf("Enter the first number (num1): ");
    scanf("%d", &num1); // Remember the '&' symbol to point to the memory address

    // 3. Take the second number as input from the user
    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

    // Print the values before swapping to verify
    printf("\n--- Before Swapping ---\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    /* 
       4. The Swapping Logic (The "Three Glass" Analogy):
       Imagine num1 is a glass of Cola, num2 is a glass of Sprite, and temp is an empty glass.
    */
    temp = num1; // Step A: Pour Cola (num1) into the empty glass (temp). num1 is now empty.
    num1 = num2; // Step B: Pour Sprite (num2) into the empty num1 glass. num2 is now empty.
    num2 = temp; // Step C: Pour Cola from the temp glass into num2. 

    // 5. Print the values after swapping to show the result
    printf("\n--- After Swapping ---\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0; // Signals to the computer that the program executed successfully
}
