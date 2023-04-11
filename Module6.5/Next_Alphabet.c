#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n>='a' && n<'z')
    {
        n=n+1;
    }
    else if(n=='z' || n=='Z')
    {
        n=n-25;

    }
    else if(n>='A' && n<'Z')
    {
        n=n+1;
    }
    printf("%c\n",n);
    return 0;
}
