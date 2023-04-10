#include<stdio.h>
int main()
{
    int a=1000000000;
    long long int b=100000000000000;
    float f=2.5;
    double d=2.0123456789123456;
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%f\n",f);
    printf("%lf\n",d);
    printf("%0.15lf\n",d);
    return 0;
}