#include <stdio.h>

int main()
{
    int n, status;
    int sum = 0;
    printf("Enter the number n");
    scanf("%d",&n);

    if(n > 2){printf("2 ");}

    for(int i = 3 ; i <= n ; i++)
    {
        status = 0;
        for(int j = 2 ; j < i ; j++)
        {
            if(i%j == 0){status = 1;}

        }

        if (status ==0){sum += i;}

    }

    printf("Sum of all prime numbers is %d",sum)
    return 0;
}
