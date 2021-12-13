#include <stdio.h>

int main()
{
    int n,f,l;
    printf("Enter the number :");
    scanf("%d",&n);
    l = n%10;
    while(n>0){
        f = n % 10;
        n /= 10;
    }

    printf("Sum of First and Last digit of N is %d",f+l);

    return 0;
}
