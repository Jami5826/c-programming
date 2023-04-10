#include<stdio.h>
int main()
{
    for(int i=1;i>=1;i++)
    // aikhane oder input er limit bola nai.. so ora onk input dibe.. tai infinite loop neya holo.. kinto aita akta time e stop hbe jokhon correct ans ashbe
    // ai situation take bole End Of File.....
    {
        int p;
        scanf("%d",&p);
        if(p==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
