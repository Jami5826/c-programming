#include<stdio.h>
int main()
{
    long long int sum;
    long long int n;
    sum=0;
    n=0;
    scanf("%lld",&n);
    if(n%2==0)
    {
        sum=0.1*n*(n+1)/2;
        // 0.1 diye un kore float e neya ..
        // nahoy n ke lonh long int e neya....
        printf("%lld",sum);
        return 0;
    }
    else
    {
        
    }
    return 0;
}