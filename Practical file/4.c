int main()
{
    int a,b,c,d;
    printf("please Enter Weight and quantity of first item");
    scanf("%d %d",&a,&b);
    printf("please Enter Weight and quantity of second item");
    scanf("%d %d",&c,&d);
    float twht = (a*b)+(c*d);
    float tquan = b+d;
    float avg = twht/tquan;


    printf("Average weight is %f",avg);
    return 0;

}