#include <stdio.h>

int main(void) {
    char name[50];
    char ans;
    printf("Your Name :\t");
    scanf(" %s" , &name);
    printf("Hi %s , would you like to continue ?? (y,n)\n", name);
    scanf(" %c", &ans);
    if(ans!='n' && ans!='y'){
        printf("Type only y or n\n");
    }
    else if(ans=='y'){
        printf("You can proceed\n");
    }
    else{
        printf("Thank you");
    }
    return 0;
}