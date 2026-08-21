#include <stdio.h>

int main(void) {
    int n=7;
    for (int i=3; i<n; i++){
        printf(" %d\n", i);
    }
    /*Check Condition: Is i <= n?
    Execute Body: Run the code inside { ... }.
     (This is where continue happens).
    Increment: Run i++.
    Loop back: Go back to Step 1*/
    return 0;
}
