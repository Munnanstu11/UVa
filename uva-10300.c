#include<stdio.h>
int main()
{
    long long t,a,b,c,i,j,n,ans;
    while(scanf("%lld",&t)==1)
    {
        for(i=0; i<t; i++)
        {
            ans=0;
            scanf("%lld",&n);
            for(j=0; j<n; j++)
            {
                scanf("%lld %lld %lld",&a,&b,&c);
                ans+=a*c;
            }
            printf("%d\n",ans);
        }


    }
    return 0;
}
