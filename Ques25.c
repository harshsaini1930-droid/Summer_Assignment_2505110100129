#include<stdio.h>
int main()
{
    int num;
    printf(" enter the num");
    scanf("%d",&num);
    int factorial(int n)
    {
        if(n == 0||n==1)
        return 1;
        else 
        return n*factorial(n-1);
    }
    printf(" factorial of %d=%d\n",num,factorial(num));
    return 0;
}
