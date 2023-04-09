#include<stdio.h>
int main()
{
    int x,m,i;
    scanf("%d",&x);
    for(i=10;i<=1000;i=i*10)
    {
        m=x/i;
        if(m<=9)
        {
           if(m%2==0)
            {
                printf("EVEN");
            }
            else
            {
                printf("ODD");
            }
        }
    }
    return 0;
}
