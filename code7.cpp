#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d%d%d",&n,&m,&x);
    int sum=n*2+m*2;
    x=sum*x;
    printf("%d\n",x);
}