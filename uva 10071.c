#include<stdio.h>
int main()
{

    int v,t,s;
    while(scanf("%d %d",&v,&t)==2)
    if(v==0 && t==0)
    {
        printf("0\n");
    }
    else
    {
        s=2*v*t;
        printf("%d\n",s);
    }
    return 0;
}
