#include <stdio.h>

int main()
{
    int n,factorial ;
    factorial = 1;
    printf("Enter the number n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        factorial *= i;

    }

    printf("Factorial of given number is %d",factorial);

    return 0;
}
