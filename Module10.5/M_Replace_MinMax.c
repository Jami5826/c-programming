#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=INT_MAX,max=INT_MIN;
    int i=0;
    while(i<n)
    {
        if(ar[i]<min)
        {
            min=ar[i];
        }
        else if(ar[i]>max)
        {
            max=ar[i];
        }
        i++;
    }
    for(int i=0;i<n;i++)
    {
        if(min==ar[i])
        {
            ar[i]=max;
        }
        else if(max==ar[i])
        {
            ar[i]=min;
        }
        printf("%d ",ar[i]);

    }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",ar[i]);
    // }

    return 0;
}