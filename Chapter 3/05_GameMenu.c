#include <stdio.h>

int main(void) {
    int choice;
    printf("~Game Menu~ \n1.Play Game\n2.Options\n3.Quit\nEnter Choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    printf("Loading Game...");
        break;
    case 2:
    printf("sensitivity\ngraphics settings\naudio&video\n");
    break;
    case 3:
    printf("Quitting...");
    break;
    default:
    printf("Invalid selection! Please enter 1, 2, or 3.\n");
        break;
    }
    return 0;
}