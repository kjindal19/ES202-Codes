#include <stdio.h>
int main() {
    int days, weeks, year;
    printf("Input days: ");
    scanf("%d", &days);

    year = (days/365);

    weeks = (days-(year*365))/7;

    days = days-(year*365)-(weeks*7);

    printf("D:W:Y - %d:%d:%d\n",days,weeks,year);

    return 0;
}