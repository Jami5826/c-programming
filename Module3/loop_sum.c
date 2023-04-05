// 1 theke akta nirdisto range porjonto number er sum ber korar c programm.
#include<stdio.h>
int main()
{
    long long int sum=0;
    int i;
    int n;
    scanf ("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        sum+=i;
        // sum=sum+i aivabe likhar short form hocche sum+=i
        // printf bahire dibo kenona amra chacchi sum ta loop sesh hoyar por print hote..
    }
    printf("%lld",sum);

    return 0;
}