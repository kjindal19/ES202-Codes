#include <stdio.h>

int main()
{
    int i,n,temp;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int j = 0; j < 10; j++)
    {
        temp = n;
        i = 0;
        do
        {
            if(j == temp%10){i++;}
            temp /= 10;
        } while(temp>0);
        printf("%d occurs %d times in the given Number\n",j,i);

    }
    return 0;
}
