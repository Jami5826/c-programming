#include<stdio.h>
#include<limits.h>
// int_min ar max use korar header file...
int main()
{
    int n;
    scanf("%d",&n);
    int max= INT_MIN,min= INT_MAX,a;
    for(int i=1;i<=n;i++)
    {
        
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
           
    }
    
    printf("%d %d\n",min,max);
    return 0;
}
