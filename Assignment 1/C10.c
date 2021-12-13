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

    printf("First digit of N is %d",f);
    printf("Last digit of N is %d",l);

    return 0;
}
