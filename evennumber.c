#include<stdio.h>
void main()
{
    int a,b,i,sum=0;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);

        }
    }
}
