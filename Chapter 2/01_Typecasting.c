#include <stdio.h>

int main(void) {
    int total_days = 450;
    int months = 12;
    
    //Without casting: output is 37.000000 (loses the decimal) as int/int always int
    float wrong_avg = total_days / months; 
    
    //With explicit casting: output is 37.500000
    float correct_avg = (float)total_days / months; 
    
    printf("Incorrect average: %f\n", wrong_avg);
    printf("Correct average: %f\n", correct_avg);
    
    return 0;
}
