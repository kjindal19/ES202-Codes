#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, big;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(b>c)
            big = a;
        else
        {
            if(c>a)
                big = c;
            else
                big = a;
        }
    }
    else
    {
        if(b>c)
            big = b;
        else
            big = c;
    }
    printf("\nLargest number = %d", big);
    getch();
    return 0;
}