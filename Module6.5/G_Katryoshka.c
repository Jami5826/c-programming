#include<stdio.h>
int main()
{
    long long int a,b,c,morti=0;
    scanf("%lld %lld %lld",&a,&b,&c);
    for(int i=1;i<=c;i++)
    {
        if(a!=0 && b!=0 && c!=0)
        {
            a=a-1;
            b=b-1;
            c=c-1;
            morti+=1;
        }
        else if(c==a*2 && c!=0 && a!=0)
        {
            a=a-1;
            c=c-1;
            morti+=1;
        }
            
            
        
        
    }
    printf("%d",morti);
    return 0;
}
