#include<stdio.h>
#include<iostream>
using namespace std;

long long rev(long long int n)
{
    long long int i=0;
    while(n>0)
    {
        i=(i*10)+(n%10);
        n=n/10;

    }
    return i;
}
int main()
{
    long long int t,i,a,b,c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&a);
        c=0;
        b=rev(a);
        while(a!=b)
        {
            a=(a+b);
            b=rev(a);
            c++;
        }
        printf("%lld %lld\n",c,a);
    }
    return 0;
}

