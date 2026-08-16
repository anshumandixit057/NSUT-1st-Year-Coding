#include <stdio.h>

int main(void) {
    /*• ‘while’ checks the condition & then executes the code.
      • ‘do-while’ executes the code & then checks the condition.*/
    // do while always executes atleast 1
    int i=0;
    do{
        printf("Value of i: %d!\n", i);
        i++;
    } while (i<6);
     i=9;
    do{
        printf("Value of i: %d!\n", i);
        i++;
    } while (i<6);
    //here since 9 is not less thn 6,so it only executes 1 time as 9
    
    return 0;
}