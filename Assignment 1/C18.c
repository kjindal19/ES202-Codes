#include <stdio.h>

int main()
{
    int n ;
    printf("Enter the number n");
    scanf("%d",&n);
    printf("ALl the factors are :\n");
    for(int i = 1 ; i <= n ; i++)
    {
        if(n%i == 0){ printf("%d ",i);}

    }


    return 0;
}
