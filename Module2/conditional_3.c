#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000)
    {
        printf("Cox's Bazar jabo\nThen ");
        if(tk >= 10000)
        {
            printf("Saint Martin jabo");
        }
        else
        {
            printf("Basay fhire ashbo");
        }
    }
    else
    {
        printf("Kothao jabo na, tk nai");
    }
    return 0;
}
