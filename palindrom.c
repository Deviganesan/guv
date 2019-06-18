#include<stdio.h>
void main()
{
int a,b,i,c=0,cv;
scanf("%d",&a);
b=a;
while(a!=0)
{
 cv=a%10;
 c=c*10+cv;
 a/=10;
}
if(c==b)
    printf("yes");
else
    printf("no");

}
