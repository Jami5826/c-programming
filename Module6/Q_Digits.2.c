#include<stdio.h>
int main()
{
    int n;
    int d;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&d);
        int n,m,o;
        if(d==0)
        {
            printf("0\n");
        }
        else
        {
            for(int i=1;i>=1;i++)
            {
                if (d!=0)
                {
                    n=d%10;
                    printf("%d ",n);
                    d=d/10;
                }
                else
                {
                    printf("\n");
                    break;
                }
            }
        }
        
    }
    return 0;
}
