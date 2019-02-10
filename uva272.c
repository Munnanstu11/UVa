#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    long i,l,count=0;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='"')
            {

                count++;
                if(count%2==1)
                    printf("``");
                else if(count%2==0)
                    printf("''");

            }
            else
            {
                printf("%c",s[i]);
            }


        }
        printf("\n");
    }
    return 0;
}
