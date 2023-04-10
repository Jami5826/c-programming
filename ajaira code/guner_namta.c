#include<stdio.h>
int main()
{
    int n,i;
    int m=0;
    for(n=1;n<=20;n++)
    {
        for(i=1;i<=10;i++)
        {
            m=n*i;
            printf("%d X %d = %d\n",n,i,m);
        }
        
    }
}