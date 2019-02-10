#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n;
    int marks[1001];
    int total,flag;
    double avg;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        total = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&marks[i]);
            total+=marks[i];
        }
        avg=(double)total/(double)n;
        flag=0;
        for(int i=0;i<n;i++){
             if(marks[i]>avg)
                flag++;
        }
        printf("%.3lf%%\n",(double)flag/(double)n*100.0);
    }
    return 0;

}
