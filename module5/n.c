#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    // 'a' er man 97 'z' er man 122
    {
        // choto hater
        int ans=a-32;
        printf("%c",ans);
    }
    if(a>='A' && a<='Z')
    // A er man 65 and Z er man 90
    {
        int ans=a+32;
        printf("%c",ans);
    }
    return 0;
}
