#include<stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    if(n>='A' && n<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(n>='a' && n<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}
