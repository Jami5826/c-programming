#include<stdio.h>
int main()
{
    int a=10,b=20;
    int sum=a+b;
    printf("%d\n",sum);
    int mns=a-b;
    printf("%d\n",mns);
    int mlt=a*b;
    printf("%d\n",mlt);
    int div=b/a;
    printf("%d\n",div);
    int x=3,y=20;
    int div2=y/x;
    printf("%d\n",div2);
    float div3=y*1.0/x;
    printf("%f\n",div3); 
    int mod=y%x;
    printf("%d",mod);
    return 0;
}
// int sum;
// sum=a+b;
// aivabeo likha jay
// 20 ke 3 diye bhag korle ans hoy 6.66666667.. kinto int dile khli 6 print korbe
// tai porata print korte hole float diye kaj korbo+ akta shortkat jkono aktake 0.1 diye *(gon) korbo.
