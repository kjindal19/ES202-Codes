#include <stdio.h>

int main()
{
    int n,rev;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        rev = (rev*10) + (n%10);
        n /= 10;
    }

    if (n == rev){ printf("The number is a palindrome");}
    else { printf("The number is not palindrome");}
    return 0;
}
