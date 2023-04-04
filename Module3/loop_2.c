#include<stdio.h>
int main()
{
    int i;
    for(i=1000;i>=1;i=i-1)
    //  akta nirdisto limiter sonkha print kora jay .. i print korlei hoy.. karon protibar number value ta memory te store hoy. print kore then abr loop e jay abr print aivabe cholte thake.. and number print hoy
    {
        printf("%d ",i);
    }
    return 0;
}