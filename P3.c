#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of levels :");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= n;j++){ printf("1 ");}
        printf("\n");
    }
    return 0;
}
