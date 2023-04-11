#include<stdio.h>
int main()
{
    int a,b,subs;
    scanf("%d %d",&a,&b);
    subs=a-b;
    if(subs>0)
    {
        printf("%d\n",subs);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
