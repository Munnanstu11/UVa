#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    int a[3];
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        cout<<"Case "<<i<<": "<<a[1]<<endl;
    }
    return 0;
}
