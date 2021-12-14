#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the number a,b");
    scanf("%d,%d", &a,&b);


    if(a>b){ printf("%d is greator",a);}
    else if(a<b){ printf("%d is greator",b);}
    else { printf("Both are equal");}

    return 0;
}