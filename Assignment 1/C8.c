#include <stdio.h>

int main()
{
    int n ;
    int sum = 0;
    printf("Enter the number n");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++)
    {
        if(i%2 != 0){sum += i;}

    }

    printf("Sum of all odd natural number is %d",sum);

    return 0;
}
