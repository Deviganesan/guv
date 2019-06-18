#include<stdio.h>
void main()
{
    int a,t,res=0,c,vv=0;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        c=a%10;
        res=res+(c*c*c);
        a/=10;
    }
    if(res==t)
        printf("yes");
        else
            printf("no");

}
