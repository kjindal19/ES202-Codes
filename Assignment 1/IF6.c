#include <stdio.h>

int main()
{
    int a;

    printf("Enter the year n");
    scanf("%d,%d", &a);


    if(a%400){ printf("%d is leap year",a);}
    else if (a%100){ printf("%d is not leap year",a);}
    else if (a%4) { printf("%d is a leap year",a);}
    else { printf("%d is not a leap year");}

    return 0;
}