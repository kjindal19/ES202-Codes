#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number n");
    scanf("%d,%d", &a);


    if(a>0){ printf("%d is positive",a);}
    else if(a<0){ printf("%d is negative",a);}
    else { printf("Given number is zero");}

    return 0;
}