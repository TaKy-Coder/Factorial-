#include<stdio.h>
#include<conio.h>
int factorial();
int factorial()
{
    long long int i,n,f=1;
    printf("Enter your number");
    scanf("%lld",&n);
    if(n==0)
    printf("Result is %lld",f);
    else
    {
        for(i=2;i<=n;i++)
        {
            f=f*i;
        }
    printf("Result is %lld",f);
    }
    
}
int main()
{
    factorial();
    return 0;
}
