#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d %d %d %d",&a,&b,&c,&n);
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
