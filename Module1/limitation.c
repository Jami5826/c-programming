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
// integer e highest 10^9 value possible
// int te 4 byte means 32 bit possible mne 2^32 bit possible onno kothay 10^9 bit/ 10 digit..
// long long int er jonno printf hocche %lld
// lld er limitation 8 byte mne 64 bit mne 2^64 bit possible... onno kothay 20 digit/10^18 porjonto
// float er limit doshomik er por 6 ta nibe mje mje 4-5 niye bki gapla korbe
// tai boro float hcche double.. kinto printf e aita %lf hbe kinto 15 digit porjonto print korte hole %0.15lf dite hbe...
// float er cheye double correct value dibe..