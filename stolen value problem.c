#include<stdio.h>


int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}


int main()
{
    int N,i;

    scanf("%d",&N);

    int val[N],dp[N];

    for(i=0;i<N;i++)
    {
        scanf("%d",&val[i]);
    }

    for(i=0;i<N;i++)
    {
        dp[i]=0;
    }

    for(i=2;i<N;i++)
    {
        dp[i]=max(dp[i],dp[i-2]+val[i]);
    }

    printf("%d",dp[N-1]);

    return 0;

}
