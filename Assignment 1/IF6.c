#include <stdio.h>

int main()
{
    int a;

    printf("Enter the year n");
    scanf("%d,%d", &a);


    if(a%4){ printf("%d is leap year",a);}
    else { printf("%d is not leap year",a);}

    return 0;
}