#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long long int t,n,i,ans;
    while(scanf("%lld",&t)==1)
    {
        for(i=0; i<t; i++)
        {
            scanf("%lld",&n);
            n*=567;
            n/=9;
            n+=7492;
            n*=235;
            n/=47;
            n-=498;
            n/=10;
            ans=n%10;
            if(ans<0)
                ans*=(-1);
            printf("%lld\n",ans);

        }
    }

}
