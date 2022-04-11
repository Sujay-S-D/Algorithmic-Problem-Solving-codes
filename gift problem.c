#include<stdio.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int n;

    scanf("%d",&n);

    int dp[n][n],a[n][n];

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            dp[i][j]=max(dp[i-1][j],a[i][j]+dp[i][j-1]);
    }
}
