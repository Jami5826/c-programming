#include<stdio.h>
int main()
{
    int i=10;
    int x=i++;
    // i++ means post increment.. aikhane age i er assign korbe then i er man 1 barabe.. same for i--
    printf(" x-%d i-%d",x,i);
    int j=10;
    int y=++j;
    // ++j hocche pre increment mne age barabe then assign korbe..same for --i
    // kinto sodo man baranor khetre i=i+1 -> i++ -> ++i ak ei kotha
    printf(" y-%d j-%d",y,j);
    return 0;
}
