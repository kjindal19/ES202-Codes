#include <stdio.h>

int main()
{
    int n, status;
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

        if (status ==0){printf("%d ",i);}

    }

    return 0;
}
