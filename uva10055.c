#include<stdio.h>
int main()
{
  long long int a,b,dif;
   while(scanf("%lld %lld",&a,&b)==2)
   {
       if(a>b)
         dif=a-b;
       else
         dif=b-a;
       printf("%lld\n",dif);
   }
   return 0;
}
