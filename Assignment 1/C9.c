#include <stdio.h>

int main()
{
    int n ;
    int i =0;
    printf("Enter the number :");
    scanf("%d",&n);

    while(n>0){
        i++;
        n /= 10;
    }

    printf("Number of digits in N is %d",i);

    return 0;
}
