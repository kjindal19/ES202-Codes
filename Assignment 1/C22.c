#include <stdio.h>

int main()
{
    int n ;
    int status = 0;
    printf("Enter the number n");
    scanf("%d",&n);

    for(int i = 2 ; i < n ; i++)
    {
        if(n%i == 0){status = 1;}

    }

    if (status ==0){printf("The given number is prime number");}
    else {printf("The given number is not prime number");}

    return 0;
}
