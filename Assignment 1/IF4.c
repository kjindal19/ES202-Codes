#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number n");
    scanf("%d,%d", &a);


    if((a%5) && (a%11)){ printf("%d is divisible by 5 and 11",a);}
    else { printf("%d is not divisible by 5 and 11",a);}

    return 0;
}