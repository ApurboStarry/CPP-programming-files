#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ara [n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum+ara[i];
    }

    int amar[n],tar[n];
    amar[0] = 0;
    tar[0] = 0;

        for(i=0;i<n;i++)
        {
            amar[i+1] = amar[i]+ara[i];
            int flag=0,j;
            for(j=i+1;j<n;j++)
            {
                flag = flag + ara[j];
            }
            if (amar[i+1]>flag) break;
        }


    printf("%d",i+1);

    return 0;
}
