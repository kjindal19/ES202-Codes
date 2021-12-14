#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c) {
        case 'a'...'z':
        case 'A'...'Z':
            printf("%c is a vowel",c);
            break;
        case '0'...'9':
            printf("%c is a digit",c);
            break;
        default:
            printf("%c is a special character",c);
            break;
    }

    return 0;
}