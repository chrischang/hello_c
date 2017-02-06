#include <cs50.h>
#include <stdio.h>

int main(void) {
    printf("Would you like to delete this file, Y/n: ");
    int c = get_char();
    switch(c) {
        case 'n':
        case 'N':
            printf("File kept\n");
            break;
        case 'y':
        case 'Y':
            printf("File deleted");
        default:
            printf("Error");
    }
}
