#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter the alphabet:\t");
    scanf("%c", &ch);

    switch( ch ){
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        printf("Rank:\t%d\n", ch - 'a' + 1);
        break;
    }  
    printf(" logic : 100 - 'a' = %d\nas a=97", 100-'a');
    return 0;
}