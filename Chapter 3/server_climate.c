#include <stdio.h>

int main(void) {
    int temp,humidity,status;
    // in if else ladder ,if higher(upper) if is true it rejects other even if other are true
    printf("Smart Server-Room Climate Controller!\n");
    printf("Temperature (integer in Celsius):\t");
    scanf("%d", &temp);
    printf("Humidity Percentage (integer from 0 to 100):\t");
    scanf("%d", &humidity);
    printf("Is the Server Running? (integer: 1 for Yes, 0 for No)");
    scanf("%d", &status);

      if (humidity < 0 || humidity > 100) {
        printf("[ERROR] Invalid Humidity Sensor Reading!\n");
        return 1; // Exit program immediately because input is garbage
    }
    if (status != 0 && status != 1){
        printf("[ERROR] Incalid Server Staus");
        return 1;
    }
    if(temp>=45 || humidity>90){
        printf("[CRITICAL ALERT] Emergency ShutDown triggered! AC set to MAX Power!\n");
    }
    if(status==1){
        printf("Active Server Optimization!!\n");
    if(temp<25 && humidity>60){
        printf("[STATUS] AC is Idle. Dehumidifier turned ON.");
    }
    else if(temp<25 && humidity<=60){
        printf("[STATUS] System stable. Fans set to Eco Mode.");
    }
    else if(temp>25 && temp<45 && humidity<60){
        printf("[STATUS] AC to medium mode");
    }
    }
    else{
        printf("Server is OFF!\n");
        if(temp<=35){
            printf("[OFFLINE] Server Idle. Climate control set to Power Saving Mode.");
        }
        else{
            printf("Medium Cooling Mode");
        }
    }

    return 0;
}