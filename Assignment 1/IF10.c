#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c) {
        case 'a'...'z':
            printf("%c is a small case Alphabet",c);
        case 'A'...'Z':
            printf("%c is an upper case Alphabet",c);
            break;
        default:
            printf("%c is not an alphabet",c);
            break;
    }

    return 0;
}