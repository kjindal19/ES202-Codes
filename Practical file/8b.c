#include<stdio.h>
int main(){

    int angle1, angle2, angle3;

    printf("Enter Angles of triangle:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);


    if(angle1 == 90 || angle2 == 90 || angle3 == 90)
        printf("The Given Triangle is Right Angled Triangle\n");
    else if(angle1 > 90 || angle2 > 90 || angle3 > 90)
        printf("The given Triangle is Obtuse Angled Triangle\n");
    else
        printf("The given Triangle is acute Angled Triangle\n");


    return 0;
}