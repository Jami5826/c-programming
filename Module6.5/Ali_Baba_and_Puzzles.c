#include<stdio.h>
int main()
{
    long long int a,b,c,n;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
    if(a+b*c==n || a+b-c==n|| a-b+c==n || a-b*c==n || a*b-c==n || a*b+c==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
