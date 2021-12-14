#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number n");
    scanf("%d,%d", &a);


    if(a%2){ printf("%d is even number",a);}
    else { printf("%d is odd",a);}

    return 0;
}