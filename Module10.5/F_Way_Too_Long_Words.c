#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char a;
        scanf("%s",a);
        int len=strlen(a);
        printf("%d",len);
    }
    return 0;
}