#include<stdio.h>
int main()
{
    int N,e=0,o=0,p=0,n=0,l;
    scanf("%d",&N);
    for( int i=1;i<=N;i++)
    {
        int a;
        scanf("%d",&a);
        // scanf ta loop er bhitor thakay jotto bar iccha scan kora jay..
        // kaj bitore thakte hbe.. 
        // lopp er bhitor a assign kora hocche.. kinto lopp er bahire hole previous number ta chole jbe
        if(a%2==0)
        // even
        {
            e++;
        }
        else
        // odd
        {
            o++;
        }
        if(a>0)
        // positive
        {
            p++;
        }
        else if(a==0)
        {
            l++;
        }
        // negative
        else
        {
            n++;
        }
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    return 0;
}
