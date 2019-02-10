#include<stdio.h>
#include<string.h>
int main()
{
    int i,length;
    char s[1000];
    while(gets(s))
    {
        length=strlen(s);
        for(i=0; i<length; i++)
        {
            printf("%c",s[i]-7);

        }
        printf("\n");

    }

}
