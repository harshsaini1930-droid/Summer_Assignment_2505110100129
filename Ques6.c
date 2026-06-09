#include<stdio.h>
int main()
{
    int num,reversed,n;
    printf(" enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        n=num%10;
        reversed=reversed*10+n;
        num=num/10;
    }
    printf(" the reversed number is %d",reversed);
        return 0;
}