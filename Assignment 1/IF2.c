#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the number a,b,c");
    scanf("%d,%d,%d", &a,&b,&c);


    if(a>=b){
        if(c>=a){ printf("%d is greator",c);}
        else{ printf("%d is greator",a);}
    }
    else {
        if(c>=b){ printf("%d is greator",c);}
        else{ printf("%d is greator",b);}
    }

    return 0;
}
