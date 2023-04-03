#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int add = a + b,min = a - b,mult = a * b;
    float div=1.0*a/b;
    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,min);
    printf("%d * %d = %d\n",a,b,mult);
    printf("%d / %d = %0.2f\n",a,b,div);
    return 0;
}