#include<stdio.h>
int main()
{
    
    int i;
    i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
        if (i==5)
        {
            break;
        }
    }
    return 0;
}