#include <stdio.h>

int main(void) {
    int days, year, month, week, day;

    printf("Enter number of days:\t");
    scanf("%d", &days); // Fixed: Added the missing '&'

    // Step 1: Calculate years and get the first remainder
    year = days / 365;
    day = days % 365;       // 'day' now holds leftovers after years (e.g., 70)
    
    // Step 2: Calculate months from the remainder and get a new remainder
    month = day / 30;       
    day = day % 30;         // Old value overwritten; 'day' now holds leftovers after months (e.g., 10)
    
    // Step 3: Calculate weeks from the remainder and get the final remainder
    week = day / 7;         
    day = day % 7;          // Old value overwritten; 'day' now holds final remaining days (e.g., 3)

    // Print the final breakdown
    printf("Time Left : ");
    printf("%d Year ", year);
    printf("%d Month ", month);
    printf("%d Week ", week);
    printf("%d Days\n", day); 

    return 0;
}
