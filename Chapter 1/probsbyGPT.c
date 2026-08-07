#include <stdio.h>

int main(void) {
   char Name[30];
   int age;
   printf("Name :\t");
   scanf(" %s", &Name);
   printf("Age : \t");
   scanf("%d", &age);
   printf("Hi %s !!, you are %d years old ", Name, age);
    return 0;
}