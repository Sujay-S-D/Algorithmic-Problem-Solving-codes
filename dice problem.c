#include<stdio.h>


int diceproblem(int dp[],int sum)
{
    dp[sum+1]=0;
    dp[0]=1;

    for(int i=0;i<=sum;i++)
    {
        for(int j=1;j<=6&&i-j>=0;j++)
        {
            dp[i] = dp[i]+dp[i-j];
        }
    }

    dp[sum];
}


int main()
{
    int sum;

    scanf("%d",&sum);

    int dp[sum+1];

printf("%d",diceproblem(dp,sum));

    return 0;

}
