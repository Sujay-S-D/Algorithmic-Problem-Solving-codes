#include<stdio.h>
#include<limits.h>

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int minimisingcoins(int dp[],int sum,int n,int c[])
{
    dp[sum+1]=INT_MAX;
    dp[0]=0;

    for(int i=1;i<=sum;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-c[j]>=0)
            dp[i] = min(dp[i],dp[i-c[j]+1]);
        }
    }

    return dp[sum];
}




int main()
{
    int sum,n;

    scanf("%d%d",&sum,&n);

    int dp[sum+1],c[n];

    for(int i=0;i<n;i++)
        c[i]=0;

printf("%d",minimisingcoins(dp,sum,n,c));

    return 0;

}
